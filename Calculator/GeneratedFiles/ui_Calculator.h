/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QLineEdit *inputLine;
    QPushButton *RigButton;
    QPushButton *FiveButton;
    QPushButton *RecButton;
    QPushButton *DivButton;
    QPushButton *AddButton;
    QPushButton *SqrtButton;
    QPushButton *TwoButton;
    QPushButton *MulButton;
    QLineEdit *expression;
    QPushButton *LefButton;
    QPushButton *SevenButton;
    QPushButton *SubButton;
    QPushButton *FourButton;
    QPushButton *SixButton;
    QPushButton *ZeroButton;
    QPushButton *BotButton;
    QPushButton *NineButton;
    QPushButton *EqlButton;
    QPushButton *DecButton;
    QPushButton *ThreeButton;
    QPushButton *CEButton;
    QPushButton *SquareButton;
    QPushButton *EightButton;
    QPushButton *ACButton;
    QPushButton *OneButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(409, 515);
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputLine = new QLineEdit(centralWidget);
        inputLine->setObjectName(QStringLiteral("inputLine"));
        inputLine->setGeometry(QRect(10, 30, 391, 61));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        inputLine->setFont(font);
        inputLine->setLayoutDirection(Qt::LeftToRight);
        inputLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RigButton = new QPushButton(centralWidget);
        RigButton->setObjectName(QStringLiteral("RigButton"));
        RigButton->setGeometry(QRect(10, 160, 91, 51));
        FiveButton = new QPushButton(centralWidget);
        FiveButton->setObjectName(QStringLiteral("FiveButton"));
        FiveButton->setGeometry(QRect(110, 280, 91, 51));
        RecButton = new QPushButton(centralWidget);
        RecButton->setObjectName(QStringLiteral("RecButton"));
        RecButton->setGeometry(QRect(310, 100, 91, 51));
        DivButton = new QPushButton(centralWidget);
        DivButton->setObjectName(QStringLiteral("DivButton"));
        DivButton->setGeometry(QRect(310, 160, 91, 51));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(310, 340, 91, 51));
        SqrtButton = new QPushButton(centralWidget);
        SqrtButton->setObjectName(QStringLiteral("SqrtButton"));
        SqrtButton->setGeometry(QRect(110, 100, 91, 51));
        TwoButton = new QPushButton(centralWidget);
        TwoButton->setObjectName(QStringLiteral("TwoButton"));
        TwoButton->setGeometry(QRect(110, 340, 91, 51));
        MulButton = new QPushButton(centralWidget);
        MulButton->setObjectName(QStringLiteral("MulButton"));
        MulButton->setGeometry(QRect(310, 220, 91, 51));
        expression = new QLineEdit(centralWidget);
        expression->setObjectName(QStringLiteral("expression"));
        expression->setGeometry(QRect(10, 0, 391, 21));
        expression->setLayoutDirection(Qt::LeftToRight);
        expression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        expression->setCursorMoveStyle(Qt::LogicalMoveStyle);
        LefButton = new QPushButton(centralWidget);
        LefButton->setObjectName(QStringLiteral("LefButton"));
        LefButton->setGeometry(QRect(10, 100, 91, 51));
        SevenButton = new QPushButton(centralWidget);
        SevenButton->setObjectName(QStringLiteral("SevenButton"));
        SevenButton->setGeometry(QRect(10, 220, 91, 51));
        SubButton = new QPushButton(centralWidget);
        SubButton->setObjectName(QStringLiteral("SubButton"));
        SubButton->setGeometry(QRect(310, 280, 91, 51));
        FourButton = new QPushButton(centralWidget);
        FourButton->setObjectName(QStringLiteral("FourButton"));
        FourButton->setGeometry(QRect(10, 280, 91, 51));
        SixButton = new QPushButton(centralWidget);
        SixButton->setObjectName(QStringLiteral("SixButton"));
        SixButton->setGeometry(QRect(210, 280, 91, 51));
        ZeroButton = new QPushButton(centralWidget);
        ZeroButton->setObjectName(QStringLiteral("ZeroButton"));
        ZeroButton->setGeometry(QRect(110, 400, 91, 51));
        BotButton = new QPushButton(centralWidget);
        BotButton->setObjectName(QStringLiteral("BotButton"));
        BotButton->setGeometry(QRect(10, 400, 91, 51));
        NineButton = new QPushButton(centralWidget);
        NineButton->setObjectName(QStringLiteral("NineButton"));
        NineButton->setGeometry(QRect(210, 220, 91, 51));
        EqlButton = new QPushButton(centralWidget);
        EqlButton->setObjectName(QStringLiteral("EqlButton"));
        EqlButton->setGeometry(QRect(310, 400, 91, 51));
        DecButton = new QPushButton(centralWidget);
        DecButton->setObjectName(QStringLiteral("DecButton"));
        DecButton->setGeometry(QRect(210, 400, 91, 51));
        ThreeButton = new QPushButton(centralWidget);
        ThreeButton->setObjectName(QStringLiteral("ThreeButton"));
        ThreeButton->setGeometry(QRect(210, 340, 91, 51));
        CEButton = new QPushButton(centralWidget);
        CEButton->setObjectName(QStringLiteral("CEButton"));
        CEButton->setGeometry(QRect(210, 160, 91, 51));
        SquareButton = new QPushButton(centralWidget);
        SquareButton->setObjectName(QStringLiteral("SquareButton"));
        SquareButton->setGeometry(QRect(210, 100, 91, 51));
        EightButton = new QPushButton(centralWidget);
        EightButton->setObjectName(QStringLiteral("EightButton"));
        EightButton->setGeometry(QRect(110, 220, 91, 51));
        ACButton = new QPushButton(centralWidget);
        ACButton->setObjectName(QStringLiteral("ACButton"));
        ACButton->setGeometry(QRect(110, 160, 91, 51));
        OneButton = new QPushButton(centralWidget);
        OneButton->setObjectName(QStringLiteral("OneButton"));
        OneButton->setGeometry(QRect(10, 340, 91, 51));
        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 409, 26));
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", Q_NULLPTR));
        inputLine->setText(QApplication::translate("CalculatorClass", "0", Q_NULLPTR));
        RigButton->setText(QApplication::translate("CalculatorClass", ")", Q_NULLPTR));
        FiveButton->setText(QApplication::translate("CalculatorClass", "5", Q_NULLPTR));
        RecButton->setText(QApplication::translate("CalculatorClass", "1/x", Q_NULLPTR));
        DivButton->setText(QApplication::translate("CalculatorClass", "%", Q_NULLPTR));
        AddButton->setText(QApplication::translate("CalculatorClass", "+", Q_NULLPTR));
        SqrtButton->setText(QApplication::translate("CalculatorClass", "sqrt", Q_NULLPTR));
        TwoButton->setText(QApplication::translate("CalculatorClass", "2", Q_NULLPTR));
        MulButton->setText(QApplication::translate("CalculatorClass", "x", Q_NULLPTR));
        LefButton->setText(QApplication::translate("CalculatorClass", "(", Q_NULLPTR));
        SevenButton->setText(QApplication::translate("CalculatorClass", "7", Q_NULLPTR));
        SubButton->setText(QApplication::translate("CalculatorClass", "-", Q_NULLPTR));
        FourButton->setText(QApplication::translate("CalculatorClass", "4", Q_NULLPTR));
        SixButton->setText(QApplication::translate("CalculatorClass", "6", Q_NULLPTR));
        ZeroButton->setText(QApplication::translate("CalculatorClass", "0", Q_NULLPTR));
        BotButton->setText(QApplication::translate("CalculatorClass", "+-", Q_NULLPTR));
        NineButton->setText(QApplication::translate("CalculatorClass", "9", Q_NULLPTR));
        EqlButton->setText(QApplication::translate("CalculatorClass", "=", Q_NULLPTR));
        DecButton->setText(QApplication::translate("CalculatorClass", ".", Q_NULLPTR));
        ThreeButton->setText(QApplication::translate("CalculatorClass", "3", Q_NULLPTR));
        CEButton->setText(QApplication::translate("CalculatorClass", "<-", Q_NULLPTR));
        SquareButton->setText(QApplication::translate("CalculatorClass", "square", Q_NULLPTR));
        EightButton->setText(QApplication::translate("CalculatorClass", "8", Q_NULLPTR));
        ACButton->setText(QApplication::translate("CalculatorClass", "c", Q_NULLPTR));
        OneButton->setText(QApplication::translate("CalculatorClass", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
