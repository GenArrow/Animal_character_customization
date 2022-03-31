/********************************************************************************
** Form generated from reading UI file 'updatewindowcatSOJLlv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UPDATEWINDOWCATSOJLLV_H
#define UPDATEWINDOWCATSOJLLV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateWindowCat
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NameLine;
    QPushButton *ColorCatButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkBoxHat;
    QPushButton *ColorHatButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton3D;
    QRadioButton *radioButtonSUN;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *IDLine;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QCheckBox *checkBoxPendant;
    QCheckBox *checkBoxRemoveHat;
    QCheckBox *checkBoxRemoveGlasses;
    QCheckBox *checkBoxRemovePendant;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateWindowCat)
    {
        if (UpdateWindowCat->objectName().isEmpty())
            UpdateWindowCat->setObjectName(QString::fromUtf8("UpdateWindowCat"));
        UpdateWindowCat->resize(460, 447);
        UpdateWindowCat->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.534, x2:1, y2:1, stop:0 rgba(101, 24, 108, 255), stop:1 rgba(15, 173, 177, 255));"));
        centralwidget = new QWidget(UpdateWindowCat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 140, 270, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout->addWidget(label);

        NameLine = new QLineEdit(layoutWidget);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        NameLine->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout->addWidget(NameLine);

        ColorCatButton = new QPushButton(layoutWidget);
        ColorCatButton->setObjectName(QString::fromUtf8("ColorCatButton"));
        QFont font1;
        font1.setPointSize(10);
        ColorCatButton->setFont(font1);
        ColorCatButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout->addWidget(ColorCatButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 200, 187, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_2->addWidget(label_2);

        checkBoxHat = new QCheckBox(layoutWidget1);
        checkBoxHat->setObjectName(QString::fromUtf8("checkBoxHat"));
        checkBoxHat->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_2->addWidget(checkBoxHat);

        ColorHatButton = new QPushButton(layoutWidget1);
        ColorHatButton->setObjectName(QString::fromUtf8("ColorHatButton"));
        ColorHatButton->setFont(font1);
        ColorHatButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_2->addWidget(ColorHatButton);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 260, 289, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_3->addWidget(label_3);

        radioButton3D = new QRadioButton(layoutWidget2);
        radioButton3D->setObjectName(QString::fromUtf8("radioButton3D"));
        radioButton3D->setFont(font1);
        radioButton3D->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_3->addWidget(radioButton3D);

        radioButtonSUN = new QRadioButton(layoutWidget2);
        radioButtonSUN->setObjectName(QString::fromUtf8("radioButtonSUN"));
        radioButtonSUN->setFont(font1);
        radioButtonSUN->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_3->addWidget(radioButtonSUN);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(42, 80, 187, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_5->addWidget(label_5);

        IDLine = new QLineEdit(layoutWidget3);
        IDLine->setObjectName(QString::fromUtf8("IDLine"));
        IDLine->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_5->addWidget(IDLine);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 10, 461, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 370, 101, 23));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(41, 320, 91, 20));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        checkBoxPendant = new QCheckBox(layoutWidget4);
        checkBoxPendant->setObjectName(QString::fromUtf8("checkBoxPendant"));
        checkBoxPendant->setFont(font1);
        checkBoxPendant->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout->addWidget(checkBoxPendant, 0, 1, 1, 1);

        checkBoxRemoveHat = new QCheckBox(centralwidget);
        checkBoxRemoveHat->setObjectName(QString::fromUtf8("checkBoxRemoveHat"));
        checkBoxRemoveHat->setGeometry(QRect(360, 204, 70, 17));
        checkBoxRemoveHat->setFont(font1);
        checkBoxRemoveHat->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        checkBoxRemoveGlasses = new QCheckBox(centralwidget);
        checkBoxRemoveGlasses->setObjectName(QString::fromUtf8("checkBoxRemoveGlasses"));
        checkBoxRemoveGlasses->setGeometry(QRect(360, 263, 70, 17));
        checkBoxRemoveGlasses->setFont(font1);
        checkBoxRemoveGlasses->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        checkBoxRemovePendant = new QCheckBox(centralwidget);
        checkBoxRemovePendant->setObjectName(QString::fromUtf8("checkBoxRemovePendant"));
        checkBoxRemovePendant->setGeometry(QRect(360, 322, 70, 17));
        checkBoxRemovePendant->setFont(font1);
        checkBoxRemovePendant->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        UpdateWindowCat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateWindowCat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 21));
        UpdateWindowCat->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateWindowCat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UpdateWindowCat->setStatusBar(statusbar);

        retranslateUi(UpdateWindowCat);

        QMetaObject::connectSlotsByName(UpdateWindowCat);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateWindowCat)
    {
        UpdateWindowCat->setWindowTitle(QCoreApplication::translate("UpdateWindowCat", "UpdateWindow", nullptr));
        label->setText(QCoreApplication::translate("UpdateWindowCat", "New name:", nullptr));
        ColorCatButton->setText(QCoreApplication::translate("UpdateWindowCat", "Pick Color", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateWindowCat", "New hat?   ", nullptr));
        checkBoxHat->setText(QString());
        ColorHatButton->setText(QCoreApplication::translate("UpdateWindowCat", "Pick Color", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateWindowCat", "New glasses?", nullptr));
        radioButton3D->setText(QCoreApplication::translate("UpdateWindowCat", "3D Glasses", nullptr));
        radioButtonSUN->setText(QCoreApplication::translate("UpdateWindowCat", "Sunglasses", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateWindowCat", "ID:      ", nullptr));
        label_6->setText(QCoreApplication::translate("UpdateWindowCat", "<html><head/><body><p><span style=\" text-decoration: underline;\">!! Empty cells / unchecked boxes will be considered as unmodified !!</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateWindowCat", "Done", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateWindowCat", "Pendant?", nullptr));
        checkBoxPendant->setText(QString());
        checkBoxRemoveHat->setText(QCoreApplication::translate("UpdateWindowCat", "Remove", nullptr));
        checkBoxRemoveGlasses->setText(QCoreApplication::translate("UpdateWindowCat", "Remove", nullptr));
        checkBoxRemovePendant->setText(QCoreApplication::translate("UpdateWindowCat", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindowCat: public Ui_UpdateWindowCat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPDATEWINDOWCATSOJLLV_H
