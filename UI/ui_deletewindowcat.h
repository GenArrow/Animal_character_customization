/********************************************************************************
** Form generated from reading UI file 'deletewindowcat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOWCAT_H
#define UI_DELETEWINDOWCAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteWindowCat
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteWindowCat)
    {
        if (DeleteWindowCat->objectName().isEmpty())
            DeleteWindowCat->setObjectName(QString::fromUtf8("DeleteWindowCat"));
        DeleteWindowCat->resize(253, 190);
        DeleteWindowCat->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.534, x2:1, y2:1, stop:0 rgba(101, 24, 108, 255), stop:1 rgba(15, 173, 177, 255));"));
        centralwidget = new QWidget(DeleteWindowCat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 110, 75, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 156, 26));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setPointSize(11);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        DeleteWindowCat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteWindowCat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 253, 21));
        DeleteWindowCat->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteWindowCat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DeleteWindowCat->setStatusBar(statusbar);

        retranslateUi(DeleteWindowCat);

        QMetaObject::connectSlotsByName(DeleteWindowCat);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindowCat)
    {
        DeleteWindowCat->setWindowTitle(QCoreApplication::translate("DeleteWindowCat", "DeleteWindowCat", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteWindowCat", "Done", nullptr));
        label->setText(QCoreApplication::translate("DeleteWindowCat", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindowCat: public Ui_DeleteWindowCat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOWCAT_H
