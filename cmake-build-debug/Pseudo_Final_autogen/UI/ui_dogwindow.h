/********************************************************************************
** Form generated from reading UI file 'dogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGWINDOW_H
#define UI_DOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DogWindow
{
public:
    QAction *actionAdd_Dog;
    QAction *actionDelete_Dog;
    QAction *actionUpdate_Dog;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *GoToCatsButton;
    QPushButton *GoToFuncButton;
    QPushButton *ReloadDogsButton;
    QPushButton *UndoDogButton;
    QPushButton *RedoButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DogWindow)
    {
        if (DogWindow->objectName().isEmpty())
            DogWindow->setObjectName(QString::fromUtf8("DogWindow"));
        DogWindow->resize(800, 600);
        DogWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.614, y1:0, x2:0.608, y2:1, stop:0 rgba(113, 176, 211, 255), stop:1 rgba(55, 236, 186, 255));"));
        actionAdd_Dog = new QAction(DogWindow);
        actionAdd_Dog->setObjectName(QString::fromUtf8("actionAdd_Dog"));
        actionDelete_Dog = new QAction(DogWindow);
        actionDelete_Dog->setObjectName(QString::fromUtf8("actionDelete_Dog"));
        actionUpdate_Dog = new QAction(DogWindow);
        actionUpdate_Dog->setObjectName(QString::fromUtf8("actionUpdate_Dog"));
        centralwidget = new QWidget(DogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 801, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 90, 521, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font1;
        font1.setPointSize(15);
        listWidget->setFont(font1);

        verticalLayout->addWidget(listWidget);

        GoToCatsButton = new QPushButton(centralwidget);
        GoToCatsButton->setObjectName(QString::fromUtf8("GoToCatsButton"));
        GoToCatsButton->setGeometry(QRect(20, 230, 221, 51));
        QFont font2;
        font2.setPointSize(14);
        GoToCatsButton->setFont(font2);
        GoToCatsButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        GoToFuncButton = new QPushButton(centralwidget);
        GoToFuncButton->setObjectName(QString::fromUtf8("GoToFuncButton"));
        GoToFuncButton->setGeometry(QRect(20, 340, 221, 51));
        GoToFuncButton->setFont(font2);
        GoToFuncButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        ReloadDogsButton = new QPushButton(centralwidget);
        ReloadDogsButton->setObjectName(QString::fromUtf8("ReloadDogsButton"));
        ReloadDogsButton->setGeometry(QRect(260, 70, 31, 23));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        ReloadDogsButton->setFont(font3);
        ReloadDogsButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        UndoDogButton = new QPushButton(centralwidget);
        UndoDogButton->setObjectName(QString::fromUtf8("UndoDogButton"));
        UndoDogButton->setGeometry(QRect(300, 70, 51, 23));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        UndoDogButton->setFont(font4);
        UndoDogButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        RedoButton = new QPushButton(centralwidget);
        RedoButton->setObjectName(QString::fromUtf8("RedoButton"));
        RedoButton->setGeometry(QRect(360, 70, 51, 23));
        RedoButton->setFont(font4);
        RedoButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        DogWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DogWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        DogWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DogWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DogWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAdd_Dog);
        menuMenu->addAction(actionDelete_Dog);
        menuMenu->addAction(actionUpdate_Dog);

        retranslateUi(DogWindow);

        QMetaObject::connectSlotsByName(DogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DogWindow)
    {
        DogWindow->setWindowTitle(QCoreApplication::translate("DogWindow", "DogWindow", nullptr));
        actionAdd_Dog->setText(QCoreApplication::translate("DogWindow", "Add Dog", nullptr));
        actionDelete_Dog->setText(QCoreApplication::translate("DogWindow", "Delete Dog", nullptr));
        actionUpdate_Dog->setText(QCoreApplication::translate("DogWindow", "Update Dog", nullptr));
        label->setText(QCoreApplication::translate("DogWindow", "<html><head/><body><p>This window is protected by <span style=\" text-decoration: underline;\">Dogs</span></p></body></html>", nullptr));
        GoToCatsButton->setText(QCoreApplication::translate("DogWindow", "GoTo Cats", nullptr));
        GoToFuncButton->setText(QCoreApplication::translate("DogWindow", "GoTo Functionalities", nullptr));
        ReloadDogsButton->setText(QCoreApplication::translate("DogWindow", "\342\237\263", nullptr));
        UndoDogButton->setText(QCoreApplication::translate("DogWindow", "UNDO", nullptr));
        RedoButton->setText(QCoreApplication::translate("DogWindow", "REDO", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("DogWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DogWindow: public Ui_DogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGWINDOW_H
