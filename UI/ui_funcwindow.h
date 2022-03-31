/********************************************************************************
** Form generated from reading UI file 'funcwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCWINDOW_H
#define UI_FUNCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FuncWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *GoToCatsButton;
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *FilterButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *SortButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *ExportButton;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QPushButton *RenderButton;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_7;
    QGridLayout *gridLayout_5;
    QLineEdit *IDRenderLine;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QPushButton *SearchButton;
    QLineEdit *SearchNameLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FuncWindow)
    {
        if (FuncWindow->objectName().isEmpty())
            FuncWindow->setObjectName(QString::fromUtf8("FuncWindow"));
        FuncWindow->resize(800, 600);
        FuncWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(113, 66, 207, 255), stop:1 rgba(56, 160, 255, 255));"));
        centralwidget = new QWidget(FuncWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 801, 51));
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
        QFont font5;
        font.setPointSize(15);
        listWidget->setFont(font5);

        verticalLayout->addWidget(listWidget);

        GoToCatsButton = new QPushButton(centralwidget);
        GoToCatsButton->setObjectName(QString::fromUtf8("GoToCatsButton"));
        GoToCatsButton->setGeometry(QRect(20, 520, 81, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        GoToCatsButton->setFont(font1);
        GoToCatsButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 520, 81, 41));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 172, 42));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        FilterButton = new QPushButton(layoutWidget);
        FilterButton->setObjectName(QString::fromUtf8("FilterButton"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        FilterButton->setFont(font2);
        FilterButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout->addWidget(FilterButton, 0, 0, 2, 1);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout->addWidget(radioButton, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 170, 171, 42));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        SortButton = new QPushButton(layoutWidget1);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));
        SortButton->setFont(font2);
        SortButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_2->addWidget(SortButton, 0, 0, 2, 1);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_2->addWidget(radioButton_3, 0, 1, 1, 1);

        radioButton_4 = new QRadioButton(layoutWidget1);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_2->addWidget(radioButton_4, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 330, 169, 42));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ExportButton = new QPushButton(layoutWidget2);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));
        ExportButton->setFont(font2);
        ExportButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_3->addWidget(ExportButton, 0, 0, 2, 1);

        radioButton_5 = new QRadioButton(layoutWidget2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_3->addWidget(radioButton_5, 0, 1, 1, 1);

        radioButton_6 = new QRadioButton(layoutWidget2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_3->addWidget(radioButton_6, 1, 1, 1, 1);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 410, 188, 87));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        RenderButton = new QPushButton(layoutWidget3);
        RenderButton->setObjectName(QString::fromUtf8("RenderButton"));
        RenderButton->setFont(font2);
        RenderButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_4->addWidget(RenderButton, 0, 0, 2, 1);

        radioButton_8 = new QRadioButton(layoutWidget3);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_4->addWidget(radioButton_8, 0, 1, 1, 1);

        radioButton_7 = new QRadioButton(layoutWidget3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_4->addWidget(radioButton_7, 1, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        IDRenderLine = new QLineEdit(layoutWidget3);
        IDRenderLine->setObjectName(QString::fromUtf8("IDRenderLine"));
        IDRenderLine->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_5->addWidget(IDRenderLine, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 2, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 260, 181, 31));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        SearchButton = new QPushButton(widget);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        SearchButton->setFont(font2);
        SearchButton->setStyleSheet(QString::fromUtf8("color: rgb(250, 250, 250);"));

        gridLayout_6->addWidget(SearchButton, 0, 0, 1, 1);

        SearchNameLine = new QLineEdit(widget);
        SearchNameLine->setObjectName(QString::fromUtf8("SearchNameLine"));

        gridLayout_6->addWidget(SearchNameLine, 0, 1, 1, 1);

        FuncWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FuncWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        FuncWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FuncWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FuncWindow->setStatusBar(statusbar);

        retranslateUi(FuncWindow);

        QMetaObject::connectSlotsByName(FuncWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FuncWindow)
    {
        FuncWindow->setWindowTitle(QCoreApplication::translate("FuncWindow", "FuncWindow", nullptr));
        label->setText(QCoreApplication::translate("FuncWindow", "Functionalities Window", nullptr));
        GoToCatsButton->setText(QCoreApplication::translate("FuncWindow", "GoTo Cats", nullptr));
        pushButton_7->setText(QCoreApplication::translate("FuncWindow", "GoTo Dogs", nullptr));
        FilterButton->setText(QCoreApplication::translate("FuncWindow", "Filter by accesories", nullptr));
        radioButton->setText(QCoreApplication::translate("FuncWindow", "Cats", nullptr));
        radioButton_2->setText(QCoreApplication::translate("FuncWindow", "Dogs", nullptr));
        SortButton->setText(QCoreApplication::translate("FuncWindow", "Sort by name (asc)", nullptr));
        radioButton_3->setText(QCoreApplication::translate("FuncWindow", "Cats", nullptr));
        radioButton_4->setText(QCoreApplication::translate("FuncWindow", "Dogs", nullptr));
        ExportButton->setText(QCoreApplication::translate("FuncWindow", "Export to HTML file", nullptr));
        radioButton_5->setText(QCoreApplication::translate("FuncWindow", "Cats", nullptr));
        radioButton_6->setText(QCoreApplication::translate("FuncWindow", "Dogs", nullptr));
        RenderButton->setText(QCoreApplication::translate("FuncWindow", "Render Preview of ", nullptr));
        radioButton_8->setText(QCoreApplication::translate("FuncWindow", "Dog", nullptr));
        radioButton_7->setText(QCoreApplication::translate("FuncWindow", "Cat", nullptr));
        label_2->setText(QCoreApplication::translate("FuncWindow", "ID to render:", nullptr));
        SearchButton->setText(QCoreApplication::translate("FuncWindow", "Search by name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FuncWindow: public Ui_FuncWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCWINDOW_H
