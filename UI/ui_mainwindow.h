#pragma once

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

class Ui_MainWindow
{
public:
    QAction *actionAdd_Cat;
    QAction *actionDelete_Cat;
    QAction *actionUpdate_Cat;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *GoToDogsButton;
    QPushButton *GoToFuncButton;
    QPushButton *UndoCatButton;
    QPushButton *ReloadCatsButton;
    QPushButton *RedoCatButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.534, x2:1, y2:1, stop:0 rgba(101, 24, 108, 255), stop:1 rgba(15, 173, 177, 255));"));
        actionAdd_Cat = new QAction(MainWindow);
        actionAdd_Cat->setObjectName(QString::fromUtf8("actionAdd_Cat"));
        actionDelete_Cat = new QAction(MainWindow);
        actionDelete_Cat->setObjectName(QString::fromUtf8("actionDelete_Cat"));
        actionUpdate_Cat = new QAction(MainWindow);
        actionUpdate_Cat->setObjectName(QString::fromUtf8("actionUpdate_Cat"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(250, 90, 521, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        listWidget->setFont(font);

        verticalLayout->addWidget(listWidget);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 801, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        label->setAlignment(Qt::AlignCenter);
        GoToDogsButton = new QPushButton(centralwidget);
        GoToDogsButton->setObjectName(QString::fromUtf8("GoToDogsButton"));
        GoToDogsButton->setGeometry(QRect(20, 230, 211, 51));
        QFont font2;
        font2.setPointSize(14);
        GoToDogsButton->setFont(font2);
        GoToDogsButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        GoToFuncButton = new QPushButton(centralwidget);
        GoToFuncButton->setObjectName(QString::fromUtf8("GoToFuncButton"));
        GoToFuncButton->setGeometry(QRect(20, 340, 211, 51));
        GoToFuncButton->setFont(font2);
        GoToFuncButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        UndoCatButton = new QPushButton(centralwidget);
        UndoCatButton->setObjectName(QString::fromUtf8("UndoCatButton"));
        UndoCatButton->setGeometry(QRect(290, 70, 51, 23));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        UndoCatButton->setFont(font3);
        UndoCatButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        ReloadCatsButton = new QPushButton(centralwidget);
        ReloadCatsButton->setObjectName(QString::fromUtf8("ReloadCatsButton"));
        ReloadCatsButton->setGeometry(QRect(250, 70, 31, 23));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        ReloadCatsButton->setFont(font4);
        ReloadCatsButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        RedoCatButton = new QPushButton(centralwidget);
        RedoCatButton->setObjectName(QString::fromUtf8("RedoCatButton"));
        RedoCatButton->setGeometry(QRect(350, 70, 51, 23));
        RedoCatButton->setFont(font3);
        RedoCatButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        QPalette palette;
        QLinearGradient gradient(0, 0.534, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(101, 24, 108, 255));
        gradient.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(230, 230, 230, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QLinearGradient gradient1(0, 0.534, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(101, 24, 108, 255));
        gradient1.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0, 0.534, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(101, 24, 108, 255));
        gradient2.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(230, 230, 230, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        QLinearGradient gradient3(0, 0.534, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(101, 24, 108, 255));
        gradient3.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush5(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QLinearGradient gradient4(0, 0.534, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(101, 24, 108, 255));
        gradient4.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush6(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        QLinearGradient gradient5(0, 0.534, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(101, 24, 108, 255));
        gradient5.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush7(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        QLinearGradient gradient6(0, 0.534, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(101, 24, 108, 255));
        gradient6.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush8(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        QBrush brush9(QColor(109, 109, 109, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        QLinearGradient gradient7(0, 0.534, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(101, 24, 108, 255));
        gradient7.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush10(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient8(0, 0.534, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(101, 24, 108, 255));
        gradient8.setColorAt(1, QColor(15, 173, 177, 255));
        QBrush brush11(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        menuMenu->setPalette(palette);
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        menuMenu->setFont(font5);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAdd_Cat);
        menuMenu->addAction(actionDelete_Cat);
        menuMenu->addAction(actionUpdate_Cat);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_Cat->setText(QCoreApplication::translate("MainWindow", "Add Cat", nullptr));
        actionDelete_Cat->setText(QCoreApplication::translate("MainWindow", "Delete Cat", nullptr));
        actionUpdate_Cat->setText(QCoreApplication::translate("MainWindow", "Update Cat", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", R"(<html><head/><body><p>This window is protected by <span style=" text-decoration: underline;">C</span><span style=" text-decoration: underline;">ats</span></p></body></html>)", nullptr));
        GoToDogsButton->setText(QCoreApplication::translate("MainWindow", "GoTo Dogs", nullptr));
        GoToFuncButton->setText(QCoreApplication::translate("MainWindow", "GoTo Functionalities", nullptr));
        UndoCatButton->setText(QCoreApplication::translate("MainWindow", "UNDO", nullptr));
        ReloadCatsButton->setText(QCoreApplication::translate("MainWindow", "\342\237\263", nullptr));
        RedoCatButton->setText(QCoreApplication::translate("MainWindow", "REDO", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE


