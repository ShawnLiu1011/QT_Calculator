#include "Calculator.h"

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.ZeroButton, SIGNAL(clicked()), this, SLOT(buttonZeroClicked()));//信号与槽函数  
	connect(ui.OneButton, SIGNAL(clicked()), this, SLOT(buttonOneClicked()));
	connect(ui.TwoButton, SIGNAL(clicked()), this, SLOT(buttonTwoClicked()));
	connect(ui.ThreeButton, SIGNAL(clicked()), this, SLOT(buttonThreeClicked()));
	connect(ui.FourButton, SIGNAL(clicked()), this, SLOT(buttonFourClicked()));
	connect(ui.FiveButton, SIGNAL(clicked()), this, SLOT(buttonFiveClicked()));
	connect(ui.SixButton, SIGNAL(clicked()), this, SLOT(buttonSixClicked()));
	connect(ui.SevenButton, SIGNAL(clicked()), this, SLOT(buttonSevenClicked()));
	connect(ui.EightButton, SIGNAL(clicked()), this, SLOT(buttonEightClicked()));
	connect(ui.NineButton, SIGNAL(clicked()), this, SLOT(buttonNineClicked()));
	connect(ui.AddButton, SIGNAL(clicked()), this, SLOT(buttonAddClicked()));
	connect(ui.SubButton, SIGNAL(clicked()), this, SLOT(buttonSubClicked()));
	connect(ui.MulButton, SIGNAL(clicked()), this, SLOT(buttonMulClicked()));
	connect(ui.DivButton, SIGNAL(clicked()), this, SLOT(buttonDivClicked()));
	connect(ui.CEButton, SIGNAL(clicked()), this, SLOT(buttonCEClicked()));
	connect(ui.ACButton, SIGNAL(clicked()), this, SLOT(buttonACClicked()));
	connect(ui.DecButton, SIGNAL(clicked()), this, SLOT(buttonDecClicked()));
	connect(ui.LefButton, SIGNAL(clicked()), this, SLOT(buttonLefClicked()));
	connect(ui.RigButton, SIGNAL(clicked()), this, SLOT(buttonRigClicked()));
	connect(ui.BotButton, SIGNAL(clicked()), this, SLOT(buttonBotClicked()));
	connect(ui.EqlButton, SIGNAL(clicked()), this, SLOT(buttonEqlClicked()));
	connect(ui.SqrtButton, SIGNAL(clicked()), this, SLOT(buttonSqrtClicked()));
	connect(ui.SquareButton, SIGNAL(clicked()), this, SLOT(buttonSquareClicked()));
	connect(ui.RecButton, SIGNAL(clicked()), this, SLOT(buttonRecClicked()));
}
int partFlag = 0;
int unaryFlag = 0;
int repeatFlag = 0;

void Calculator::buttonZeroClicked()  //以下是实现相应的槽函数
{
	if (!unaryFlag) {
		if (input == "0")
			input = '0';
		else input = input + '0';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonOneClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '1';
		else input = input + '1';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonTwoClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '2';
		else input = input + '2';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonThreeClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '3';
		else input = input + '3';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonFourClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '4';
		else input = input + '4';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonFiveClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '5';
		else input = input + '5';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonSixClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '6';
		else input = input + '6';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonSevenClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '7';
		else input = input + '7';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonEightClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '8';
		else input = input + '8';
		ui.inputLine->setText(input);
	}
}

void Calculator::buttonNineClicked()
{
	if (!unaryFlag) {
		if (input == "0")
			input = '9';
		else input = input + '9';
		ui.inputLine->setText(input);
	}
}


void Calculator::buttonLefClicked()//左括号  
{
	partFlag++;
	expression += '(';
	ui.expression->setText(expression);
	ops.push('(');
}

void Calculator::buttonRigClicked()//右括号  
{
	if (partFlag)
	{
		unaryFlag = 1;
		if (expression.right(1) != ')') {
			num.push(input.toDouble());
			expression += input;
		}
		expression += +')';
		ui.expression->setText(expression);

		while (ops.top() != '(')
			compute(ops.pop());
		ops.pop();
		input.setNum(num.top());
		ui.inputLine->setText(input);
		partFlag--;
	}
}


void Calculator::buttonCEClicked()
{
	input = input.left(input.length() - 1); //减去一字符
	if (input.isEmpty())
		input = '0';
	ui.inputLine->setText(input);
}

void Calculator::clearAll() {
	partFlag = 0;
	unaryFlag = 0;
	repeatFlag = 0;
	input.clear();
	expression.clear();
	ops.clear();
	num.clear();
	ui.expression->setText("");
	input = '0';
}

void Calculator::buttonACClicked()
{
	clearAll();
	ui.inputLine->setText(input);
}

void Calculator::buttonDecClicked()
{
	if (input == "0")
		input = '.';
	else input = input + '.';
	ui.inputLine->setText(input);
}


void Calculator::buttonAddClicked() {
	if (!input.isEmpty()) {
		if (expression.right(1) == '/' && input == '0') {
			clearAll();
			ui.inputLine->setText("div 0 invalid input!");
		}
		else
		{
			qDebug() << expression << input << ops << num << "square";
			if (!unaryFlag)
			{
				num.push(input.toDouble());
				expression += input;
			}
			unaryFlag = 0;
			repeatFlag = 0;
			expression += '+';
			ui.expression->setText(expression);
			process('+');
		}
	}
}

void Calculator::process(char s) {
	qDebug() << expression << input << ops << num << "first";
	if (ops.isEmpty() || (getLevel(s) > getLevel(ops.top())))
		ops.push(s);
	else
	{
		while (!ops.isEmpty() && getLevel(ops.top()) >= getLevel(s))
		{
			compute(ops.pop());
		}
		ops.push(s);
	}
	input.setNum(num.top());
	ui.inputLine->setText(input);
	input.clear();
	qDebug() << expression << input << ops << num << "last";
}

void Calculator::compute(char s) {
	double a = num.pop();
	double b = num.pop();

	switch (s)
	{
	case '+':
		num.push(b + a);
		break;
	case '-':
		num.push(b - a);
		break;
	case '*':
		num.push(b * a);
		break;
	case '/':
		num.push(b / a);
		break;
	default:
		break;
	}
}

void Calculator::buttonSubClicked() {
	if (!input.isEmpty()) {
		if (expression.right(1) == '/' && input == '0') {
			clearAll();
			ui.inputLine->setText("div 0 invalid input!");
		}
		else
		{
			repeatFlag = 0;
			if (expression.right(1) != ')')
			{
				num.push(input.toDouble());
				expression += input;
			}
			unaryFlag = 0;
			repeatFlag = 0;
			expression += '-';
			ui.expression->setText(expression);
			process('-');
		}
	}
}

void Calculator::buttonMulClicked() {
	if (!input.isEmpty()) {
		if (expression.right(1) == '/' && input == '0') {
			clearAll();
			ui.inputLine->setText("div 0 invalid input!");
		}
		else
		{
			repeatFlag = 0;
			if (expression.right(1) != ')')
			{
				num.push(input.toDouble());
				expression += input;
			}
			unaryFlag = 0;
			repeatFlag = 0;
			expression += '*';
			ui.expression->setText(expression);
			process('*');
		}
	}
}

void Calculator::buttonDivClicked() {
	if (!input.isEmpty()) {
		if (expression.right(1) == '/' && input == '0') {
			clearAll();
			ui.inputLine->setText("div 0 invalid input!");
		}
		else
		{
			repeatFlag = 0;
			if (expression.right(1) != ')')
			{
				num.push(input.toDouble());
				expression += input;
			}
			unaryFlag = 0;
			repeatFlag = 0;
			expression += '/';
			ui.expression->setText(expression);
			process('/');
		}
	}
}

void Calculator::buttonEqlClicked()
{
	if (partFlag == 0)
	{
		qDebug() << expression << input << ops << num << "equalfirst";
		qDebug() << unaryFlag;
		if (input == '0' && expression.right(1) == '/')
		{
			clearAll();
			ui.inputLine->setText("div 0 invalid input!");
		}
		else
		{
			if (unaryFlag == 0)
				num.push(input.toDouble());
			qDebug() << expression << input << ops << num << "equalsecond";
			while (!ops.isEmpty())
			{
				compute(ops.pop());
			}
			input.setNum(num.top());
			ui.inputLine->setText(input);

			clearAll();
			qDebug() << expression << input << ops << num << "equallast";
		}
	}
}

void Calculator::unary(QString s)
{
	if (expression.right(1) == ')')
	{
		int balance = 1;
		for (int i = expression.length() - 2; i >= 0; i--)
		{
			if (expression.mid(i, 1) == ')')
				balance++;
			else if (expression.mid(i, 1) == '(')
				balance--;

			if (balance == 0)
			{
				if (repeatFlag)
				{
					expression.insert(i - 3, s + '(');
					expression.append(')');
				}
				else expression.insert(i, s);
				break;
			}
		}
	}
	else
		expression += s + '(' + input + ')';
	if (unaryFlag) num.pop();
	if (repeatFlag) unaryFlag = 1;

	ui.expression->setText(expression);
	repeatFlag = 1;
	unaryFlag = 1;

	qDebug() << "*****" << unaryFlag;
}

void Calculator::buttonBotClicked()
{
	unary("NEG");
	input.setNum(-1 * input.toDouble());
	ui.inputLine->setText(input);
	num.push(input.toDouble());
}

void Calculator::buttonSquareClicked()
{

	unary("POW");
	input.setNum(input.toDouble() * input.toDouble());
	ui.inputLine->setText(input);
	num.push(input.toDouble());
}

void Calculator::buttonSqrtClicked()
{
	if (input.toDouble() < 0)
	{
		clearAll();
		ui.inputLine->setText("Sqrt invalid input!");
	}
	else
	{
		unary("SQT");
		input.setNum(sqrt(input.toDouble()));
		ui.inputLine->setText(input);
		num.push(input.toDouble());
	}
}

void Calculator::buttonRecClicked()
{
	if (input == '0')
	{
		clearAll();
		ui.inputLine->setText("Rec invalid input!");
	}
	else
	{
		unary("REC");
		input.setNum(1.0 / input.toDouble());
		ui.inputLine->setText(input);
		num.push(input.toDouble());
	}
}
int Calculator::getLevel(char s)
{
	if (s == '+' || s == '-') {
		return 1;
	}
	else if (s == '*' || s == '/') {
		return 2;
	}
	else if (s == '(') {
		return -1;
	}
	else if (s == '=') {
		return 9;
	}
	else return 0;
}


