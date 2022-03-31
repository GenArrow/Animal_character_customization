/********************************************************************************
** Form generated from reading UI file 'deletewindowdog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOWDOG_H
#define UI_DELETEWINDOWDOG_H

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

class Ui_DeleteWindowDog
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteWindowDog)
    {
        if (DeleteWindowDog->objectName().isEmpty())
            DeleteWindowDog->setObjectName(QString::fromUtf8("DeleteWindowDog"));
        DeleteWindowDog->resize(253, 190);
        DeleteWindowDog->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.614, y1:0, x2:0.608, y2:1, stop:0 rgba(113, 176, 211, 255), stop:1 rgba(55, 236, 186, 255));"));
        centralwidget = new QWidget(DeleteWindowDog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 110, 75, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 156, 26));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setPointSize(11);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        DeleteWindowDog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteWindowDog);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 253, 21));
        DeleteWindowDog->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteWindowDog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DeleteWindowDog->setStatusBar(statusbar);

        retranslateUi(DeleteWindowDog);

        QMetaObject::connectSlotsByName(DeleteWindowDog);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindowDog)
    {
        DeleteWindowDog->setWindowTitle(QCoreApplication::translate("DeleteWindowDog", "DeleteWindowCat", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteWindowDog", "Done", nullptr));
        label->setText(QCoreApplication::translate("DeleteWindowDog", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindowDog: public Ui_DeleteWindowDog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOWDOG_H
