#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"
#include <QString>  
#include <QStack>
#include <QDebug>
#include "iostream"

using namespace std;
class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget *parent = Q_NULLPTR);

private:
	Ui::CalculatorClass ui;
	QString expression;
	QString input;
	int getLevel(char s);
	QStack<char> ops;
	QStack<double> num;
	void compute(char s);
	void process(char s);
	void unary(QString s);
	void clearAll();

	private slots:
	void buttonZeroClicked();
	void buttonOneClicked();
	void buttonTwoClicked();
	void buttonThreeClicked();
	void buttonFourClicked();
	void buttonFiveClicked();
	void buttonSixClicked();
	void buttonSevenClicked();
	void buttonEightClicked();
	void buttonNineClicked();
	void buttonAddClicked();
	void buttonSubClicked();
	void buttonMulClicked();
	void buttonDivClicked();
	void buttonLefClicked();
	void buttonRigClicked();
	void buttonCEClicked();
	void buttonACClicked();
	void buttonDecClicked();
	void buttonBotClicked();
	void buttonEqlClicked();
	void buttonSquareClicked();
	void buttonSqrtClicked();
	void buttonRecClicked();
};
