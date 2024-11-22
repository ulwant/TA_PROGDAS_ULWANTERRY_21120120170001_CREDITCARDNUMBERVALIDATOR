/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *cardNumberInput;
    QPushButton *validateButton;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(401, 303);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cardNumberInput = new QLineEdit(centralwidget);
        cardNumberInput->setObjectName("cardNumberInput");
        cardNumberInput->setGeometry(QRect(10, 200, 381, 24));
        cardNumberInput->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        cardNumberInput->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        validateButton = new QPushButton(centralwidget);
        validateButton->setObjectName("validateButton");
        validateButton->setGeometry(QRect(10, 230, 381, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 180, 411, 21));
        label->setMouseTracking(true);
        label->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"OCR-A BT\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-50, -10, 501, 291));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/release/cc.JPG);"));
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        cardNumberInput->raise();
        validateButton->raise();
        label->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cardNumberInput->setText(QString());
        validateButton->setText(QCoreApplication::translate("MainWindow", "Validate", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#f4f4f4;\">Masukkan nomor kartu Visa/ Mastercard/ Amex </span></p></body></html>", nullptr));
        label_2->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
