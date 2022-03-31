/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_AddWindow
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *checkBoxPendant;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *IDLine;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(400, 422);
        AddWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.534, x2:1, y2:1, stop:0 rgba(101, 24, 108, 255), stop:1 rgba(15, 173, 177, 255));"));
        centralwidget = new QWidget(AddWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 110, 270, 26));
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
        layoutWidget1->setGeometry(QRect(40, 180, 169, 26));
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

        horizontalLayout_2->addWidget(checkBoxHat);

        ColorHatButton = new QPushButton(layoutWidget1);
        ColorHatButton->setObjectName(QString::fromUtf8("ColorHatButton"));
        ColorHatButton->setFont(font1);
        ColorHatButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_2->addWidget(ColorHatButton);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 250, 271, 24));
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
        layoutWidget3->setGeometry(QRect(40, 310, 112, 20));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_4->addWidget(label_4);

        checkBoxPendant = new QCheckBox(layoutWidget3);
        checkBoxPendant->setObjectName(QString::fromUtf8("checkBoxPendant"));

        horizontalLayout_4->addWidget(checkBoxPendant);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(42, 40, 168, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_5->addWidget(label_5);

        IDLine = new QLineEdit(layoutWidget4);
        IDLine->setObjectName(QString::fromUtf8("IDLine"));
        IDLine->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        horizontalLayout_5->addWidget(IDLine);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 360, 101, 23));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        AddWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        AddWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AddWindow->setStatusBar(statusbar);

        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "AddWindow", nullptr));
        label->setText(QCoreApplication::translate("AddWindow", "Name:", nullptr));
        ColorCatButton->setText(QCoreApplication::translate("AddWindow", "Pick Color", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindow", "Hat?   ", nullptr));
        checkBoxHat->setText(QString());
        ColorHatButton->setText(QCoreApplication::translate("AddWindow", "Pick Color", nullptr));
        label_3->setText(QCoreApplication::translate("AddWindow", "Glasses?", nullptr));
        radioButton3D->setText(QCoreApplication::translate("AddWindow", "3D Glasses", nullptr));
        radioButtonSUN->setText(QCoreApplication::translate("AddWindow", "Sunglasses", nullptr));
        label_4->setText(QCoreApplication::translate("AddWindow", "Pendant?", nullptr));
        checkBoxPendant->setText(QString());
        label_5->setText(QCoreApplication::translate("AddWindow", "ID:      ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddWindow", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
