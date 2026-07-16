#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadAndPreviewConfig();
    ui->textEdit->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString theme = ui->combotheme->currentText();
    QString fontSize = ui->editfontsize->text();

    QJsonObject config;
    config["theme"] = theme;
    config["font_size"] = fontSize.toInt();

    QJsonDocument doc(config);
    QByteArray jsonData = doc.toJson();

    \
    QProcess process;
    process.start("python3", QStringList() << "/home/chaoshan/vem_backend/niri_bridge.py" << "apply");
    process.write(jsonData);
    process.closeWriteChannel();
    process.waitForFinished();

    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        ui->textEdit->setText("Python Error:\n" + error);
        ui->labelStatus->setText("Backend execution failed");
        ui->labelStatus->setStyleSheet("color: red;");
    } else {
        ui->textEdit->setText(output);
        ui->labelStatus->setText("Configuration has been synchronized to the backend");
        ui->labelStatus->setStyleSheet("color: green;");
    }

}

void MainWindow::loadAndPreviewConfig()
{

    QProcess process;
    process.start("python3", QStringList() << "/home/chaoshan/vem_backend/niri_bridge.py" << "export");

    process.waitForFinished();

    QString kdlContent = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        ui->textEdit->setText("Error loading config:\n" + error);
        ui->labelStatus->setText("fail");
        ui->labelStatus->setStyleSheet("color: red;");
    } else {
        ui->textEdit->setText(kdlContent);
        ui->labelStatus->setText("success");
        ui->labelStatus->setStyleSheet("color: green;");
    }
}
