/********************************************************************************
** Form generated from reading UI file 'tradestatistics.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADESTATISTICS_H
#define UI_TRADESTATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TradeStatistics
{
public:
    QWidget *centralwidget;
    QLabel *titleTradeStats;
    QListWidget *listWidget;
    QLabel *label_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *RemoveBtn;
    QPushButton *calculateBtn;
    QPushButton *clearAllBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *profitLossesLabel_2;
    QLineEdit *balancevalue;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *profitLossesLabel;
    QLineEdit *profitlosstxt;
    QLabel *messageTxt;
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *totalTradeTxt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *plTxt;
    QHBoxLayout *horizontalLayout_10;
    QLabel *InitalBalanceLabel;
    QLabel *initialBalanceTxt;
    QHBoxLayout *horizontalLayout_9;
    QLabel *newBalanceLabel;
    QLabel *balanceTxt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *winTxt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lossTxt;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *BigwinnerTxt;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *BiglossTxt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TradeStatistics)
    {
        if (TradeStatistics->objectName().isEmpty())
            TradeStatistics->setObjectName("TradeStatistics");
        TradeStatistics->resize(800, 600);
        TradeStatistics->setMinimumSize(QSize(800, 600));
        TradeStatistics->setMaximumSize(QSize(800, 600));
        TradeStatistics->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 112, 255);\n"
"background-color: rgb(41, 0, 123);"));
        centralwidget = new QWidget(TradeStatistics);
        centralwidget->setObjectName("centralwidget");
        titleTradeStats = new QLabel(centralwidget);
        titleTradeStats->setObjectName("titleTradeStats");
        titleTradeStats->setGeometry(QRect(170, 60, 481, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(24);
        font.setItalic(false);
        titleTradeStats->setFont(font);
        titleTradeStats->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(170, 230, 211, 211));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(520, 540, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(510, 130, 91, 86));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"background-color: rgb(85, 170, 0);"));

        verticalLayout_2->addWidget(pushButton);

        RemoveBtn = new QPushButton(layoutWidget);
        RemoveBtn->setObjectName("RemoveBtn");
        RemoveBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(RemoveBtn);

        calculateBtn = new QPushButton(layoutWidget);
        calculateBtn->setObjectName("calculateBtn");
        calculateBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        verticalLayout_2->addWidget(calculateBtn);

        clearAllBtn = new QPushButton(layoutWidget);
        clearAllBtn->setObjectName("clearAllBtn");
        clearAllBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(clearAllBtn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(210, 140, 291, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        profitLossesLabel_2 = new QLabel(layoutWidget1);
        profitLossesLabel_2->setObjectName("profitLossesLabel_2");
        QFont font2;
        font2.setPointSize(14);
        profitLossesLabel_2->setFont(font2);
        profitLossesLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(profitLossesLabel_2);

        balancevalue = new QLineEdit(layoutWidget1);
        balancevalue->setObjectName("balancevalue");
        balancevalue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(balancevalue);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(210, 180, 291, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        profitLossesLabel = new QLabel(layoutWidget2);
        profitLossesLabel->setObjectName("profitLossesLabel");
        profitLossesLabel->setFont(font2);
        profitLossesLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(profitLossesLabel);

        profitlosstxt = new QLineEdit(layoutWidget2);
        profitlosstxt->setObjectName("profitlosstxt");
        profitlosstxt->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(profitlosstxt);

        messageTxt = new QLabel(centralwidget);
        messageTxt->setObjectName("messageTxt");
        messageTxt->setGeometry(QRect(170, 480, 481, 61));
        messageTxt->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 102, 255);\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(330, 450, 221, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe Print")});
        font3.setPointSize(12);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(400, 230, 201, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_4);

        totalTradeTxt = new QLabel(widget);
        totalTradeTxt->setObjectName("totalTradeTxt");
        totalTradeTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(totalTradeTxt);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_6);

        plTxt = new QLabel(widget);
        plTxt->setObjectName("plTxt");
        plTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(plTxt);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        InitalBalanceLabel = new QLabel(widget);
        InitalBalanceLabel->setObjectName("InitalBalanceLabel");
        InitalBalanceLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(InitalBalanceLabel);

        initialBalanceTxt = new QLabel(widget);
        initialBalanceTxt->setObjectName("initialBalanceTxt");
        initialBalanceTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(initialBalanceTxt);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        newBalanceLabel = new QLabel(widget);
        newBalanceLabel->setObjectName("newBalanceLabel");
        newBalanceLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(newBalanceLabel);

        balanceTxt = new QLabel(widget);
        balanceTxt->setObjectName("balanceTxt");
        balanceTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(balanceTxt);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        winTxt = new QLabel(widget);
        winTxt->setObjectName("winTxt");
        winTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(winTxt);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_3);

        lossTxt = new QLabel(widget);
        lossTxt->setObjectName("lossTxt");
        lossTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lossTxt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_2);

        BigwinnerTxt = new QLabel(widget);
        BigwinnerTxt->setObjectName("BigwinnerTxt");
        BigwinnerTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(BigwinnerTxt);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_5);

        BiglossTxt = new QLabel(widget);
        BiglossTxt->setObjectName("BiglossTxt");
        BiglossTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(BiglossTxt);


        verticalLayout->addLayout(horizontalLayout_4);

        TradeStatistics->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TradeStatistics);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        TradeStatistics->setMenuBar(menubar);
        statusbar = new QStatusBar(TradeStatistics);
        statusbar->setObjectName("statusbar");
        TradeStatistics->setStatusBar(statusbar);

        retranslateUi(TradeStatistics);

        QMetaObject::connectSlotsByName(TradeStatistics);
    } // setupUi

    void retranslateUi(QMainWindow *TradeStatistics)
    {
        TradeStatistics->setWindowTitle(QCoreApplication::translate("TradeStatistics", "TradeStatistics", nullptr));
        titleTradeStats->setText(QCoreApplication::translate("TradeStatistics", "Trading Statistics Calculator ", nullptr));
        label_7->setText(QCoreApplication::translate("TradeStatistics", "Created By Ivan Chong", nullptr));
        pushButton->setText(QCoreApplication::translate("TradeStatistics", "Add", nullptr));
        RemoveBtn->setText(QCoreApplication::translate("TradeStatistics", "Remove", nullptr));
        calculateBtn->setText(QCoreApplication::translate("TradeStatistics", "Calculate", nullptr));
        clearAllBtn->setText(QCoreApplication::translate("TradeStatistics", "Clear All", nullptr));
        profitLossesLabel_2->setText(QCoreApplication::translate("TradeStatistics", "Trading Capital :", nullptr));
        profitLossesLabel->setText(QCoreApplication::translate("TradeStatistics", "Profit/Losses :", nullptr));
        messageTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("TradeStatistics", "Feedback Notification Box", nullptr));
        label_4->setText(QCoreApplication::translate("TradeStatistics", "Total Trades: ", nullptr));
        totalTradeTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("TradeStatistics", "Total Profit/Loss:", nullptr));
        plTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        InitalBalanceLabel->setText(QCoreApplication::translate("TradeStatistics", "Inital Balance", nullptr));
        initialBalanceTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        newBalanceLabel->setText(QCoreApplication::translate("TradeStatistics", "New Balance:", nullptr));
        balanceTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("TradeStatistics", "Win Trades % :", nullptr));
        winTxt->setText(QCoreApplication::translate("TradeStatistics", "Win Trade %:", nullptr));
        label_3->setText(QCoreApplication::translate("TradeStatistics", "Lose Trade %:", nullptr));
        lossTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("TradeStatistics", "Biggest Winner:", nullptr));
        BigwinnerTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("TradeStatistics", "Biggest Loss:", nullptr));
        BiglossTxt->setText(QCoreApplication::translate("TradeStatistics", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TradeStatistics: public Ui_TradeStatistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADESTATISTICS_H
