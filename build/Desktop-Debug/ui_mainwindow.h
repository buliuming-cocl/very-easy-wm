/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *labeltheme;
    QLineEdit *editfontsize;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QComboBox *combotheme;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLabel *labelStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        labeltheme = new QLabel(groupBox);
        labeltheme->setObjectName("labeltheme");

        horizontalLayout->addWidget(labeltheme);

        editfontsize = new QLineEdit(groupBox);
        editfontsize->setObjectName("editfontsize");

        horizontalLayout->addWidget(editfontsize);

        horizontalSpacer_3 = new QSpacerItem(139, 94, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        combotheme = new QComboBox(groupBox);
        combotheme->addItem(QString());
        combotheme->addItem(QString());
        combotheme->setObjectName("combotheme");
        combotheme->setCursor(QCursor(Qt::SizeVerCursor));
        combotheme->setEditable(true);

        horizontalLayout->addWidget(combotheme);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border: 1px solid #ccc;\n"
"font-family: \"Sans Serif\";\n"
"font-size: 12px;"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addWidget(groupBox_2);

        labelStatus = new QLabel(centralwidget);
        labelStatus->setObjectName("labelStatus");

        verticalLayout_2->addWidget(labelStatus);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "very easy wm", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Visually modify the window manager configuration. After making changes, click", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "'Save Configuration' and the changes will take effect immediately.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Display and Theme Configuration", nullptr));
        labeltheme->setText(QCoreApplication::translate("MainWindow", "Font size:", nullptr));
        editfontsize->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Theme mode", nullptr));
        combotheme->setItemText(0, QCoreApplication::translate("MainWindow", "light mode", nullptr));
        combotheme->setItemText(1, QCoreApplication::translate("MainWindow", "dark mode", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Original Configuration Preview", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Configuration preview will be displayed here...", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "                                                                                                                                                                                       ready", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
