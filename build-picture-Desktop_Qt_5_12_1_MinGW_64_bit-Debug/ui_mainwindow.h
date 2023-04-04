/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_widget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_widget *widget;
    QPushButton *pushButton_draw;
    QLineEdit *lineEdit_inputStar;
    QLabel *label_countStar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 618);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new my_widget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 70, 1111, 511));
        pushButton_draw = new QPushButton(centralWidget);
        pushButton_draw->setObjectName(QString::fromUtf8("pushButton_draw"));
        pushButton_draw->setGeometry(QRect(20, 4, 151, 51));
        QFont font;
        font.setPointSize(18);
        pushButton_draw->setFont(font);
        lineEdit_inputStar = new QLineEdit(centralWidget);
        lineEdit_inputStar->setObjectName(QString::fromUtf8("lineEdit_inputStar"));
        lineEdit_inputStar->setGeometry(QRect(390, 10, 191, 41));
        lineEdit_inputStar->setFont(font);
        label_countStar = new QLabel(centralWidget);
        label_countStar->setObjectName(QString::fromUtf8("label_countStar"));
        label_countStar->setGeometry(QRect(190, 10, 191, 41));
        label_countStar->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_draw->setText(QApplication::translate("MainWindow", "\320\240\320\270\321\201\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_countStar->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\267\320\262\320\265\320\267\320\264:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
