/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *down;
    QPushButton *left;
    QPushButton *right;
    QPushButton *up;
    QPlainTextEdit *plainTextEdit;
    QPushButton *stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setDockOptions(QMainWindow::DockOption::AllowTabbedDocks|QMainWindow::DockOption::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        down = new QPushButton(centralwidget);
        down->setObjectName("down");
        down->setGeometry(QRect(260, 360, 121, 51));
        down->setCheckable(false);
        down->setChecked(false);
        down->setAutoDefault(false);
        down->setFlat(false);
        left = new QPushButton(centralwidget);
        left->setObjectName("left");
        left->setGeometry(QRect(170, 300, 91, 41));
        left->setCheckable(false);
        left->setAutoDefault(false);
        left->setFlat(false);
        right = new QPushButton(centralwidget);
        right->setObjectName("right");
        right->setGeometry(QRect(380, 300, 91, 41));
        right->setCheckable(false);
        right->setAutoDefault(false);
        right->setFlat(false);
        up = new QPushButton(centralwidget);
        up->setObjectName("up");
        up->setGeometry(QRect(260, 230, 121, 51));
        up->setCheckable(false);
        up->setAutoDefault(false);
        up->setFlat(false);
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(570, 149, 71, 31));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);
        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(270, 290, 101, 51));
        stop->setCheckable(false);
        stop->setAutoDefault(false);
        stop->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        down->setDefault(false);
        left->setDefault(false);
        right->setDefault(false);
        up->setDefault(false);
        stop->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        down->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        left->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        right->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        up->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        plainTextEdit->setPlainText(QString());
        stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
