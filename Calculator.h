#pragma once
#define _USE_MATH_DEFINES
#include <string>
#include <vector>
#include <regex>
#include <msclr/marshal_cppstd.h>
#include <cmath>
#include <algorithm>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NCalc;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ resultBox;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonMult;
	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonEC;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonLeftBracket;
	private: System::Windows::Forms::Button^ buttonRightBracket;
	private: System::Windows::Forms::Button^ buttonSin;
	private: System::Windows::Forms::Button^ buttonCos;
	private: System::Windows::Forms::Button^ buttonTan;
	private: System::Windows::Forms::Button^ buttonExponent;
	private: System::Windows::Forms::Button^ buttonSqrt;
	private: System::Windows::Forms::Button^ buttonFactorial;
	private: System::Windows::Forms::Button^ buttonReciprocal;

	private: System::Windows::Forms::Button^ buttonPi;

	protected:

	private:
		long long Factorial(int n) {
			if (n < 0) throw gcnew ArgumentException("Факторіал не визначено для від'ємних чисел.");
			if (n == 0) return 1;
			long long result = 1;
			for (int i = 1; i <= n; ++i) {
				result *= i;
			}
			return result;
		}
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonEC = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonLeftBracket = (gcnew System::Windows::Forms::Button());
			this->buttonRightBracket = (gcnew System::Windows::Forms::Button());
			this->buttonSin = (gcnew System::Windows::Forms::Button());
			this->buttonCos = (gcnew System::Windows::Forms::Button());
			this->buttonTan = (gcnew System::Windows::Forms::Button());
			this->buttonExponent = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonFactorial = (gcnew System::Windows::Forms::Button());
			this->buttonReciprocal = (gcnew System::Windows::Forms::Button());
			this->buttonPi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// resultBox
			// 
			this->resultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultBox->Location = System::Drawing::Point(11, 12);
			this->resultBox->Name = L"resultBox";
			this->resultBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resultBox->Size = System::Drawing::Size(304, 38);
			this->resultBox->TabIndex = 0;
			this->resultBox->Text = L"0";
			this->resultBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(135, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(197, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(73, 240);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(135, 240);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(197, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(73, 194);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(135, 194);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(197, 194);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 40);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(73, 332);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(119, 40);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// buttonDot
			// 
			this->buttonDot->Location = System::Drawing::Point(197, 332);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(56, 40);
			this->buttonDot->TabIndex = 11;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &Calculator::buttonDot_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Location = System::Drawing::Point(259, 332);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(56, 40);
			this->buttonEqual->TabIndex = 12;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &Calculator::buttonEqual_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(259, 286);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(56, 40);
			this->buttonPlus->TabIndex = 13;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &Calculator::buttonAlg_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(259, 240);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(56, 40);
			this->buttonMinus->TabIndex = 14;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Calculator::buttonAlg_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->Location = System::Drawing::Point(259, 194);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(56, 40);
			this->buttonMult->TabIndex = 15;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &Calculator::buttonAlg_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Location = System::Drawing::Point(259, 148);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(56, 40);
			this->buttonDivide->TabIndex = 16;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &Calculator::buttonAlg_Click);
			// 
			// buttonEC
			// 
			this->buttonEC->Location = System::Drawing::Point(197, 148);
			this->buttonEC->Name = L"buttonEC";
			this->buttonEC->Size = System::Drawing::Size(56, 40);
			this->buttonEC->TabIndex = 18;
			this->buttonEC->Text = L"EC";
			this->buttonEC->UseVisualStyleBackColor = true;
			this->buttonEC->Click += gcnew System::EventHandler(this, &Calculator::buttonEC_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(136, 148);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(55, 40);
			this->buttonClear->TabIndex = 19;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Calculator::buttonClear_Click);
			// 
			// buttonLeftBracket
			// 
			this->buttonLeftBracket->Location = System::Drawing::Point(197, 102);
			this->buttonLeftBracket->Name = L"buttonLeftBracket";
			this->buttonLeftBracket->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttonLeftBracket->Size = System::Drawing::Size(56, 40);
			this->buttonLeftBracket->TabIndex = 20;
			this->buttonLeftBracket->Text = L"(";
			this->buttonLeftBracket->UseVisualStyleBackColor = true;
			this->buttonLeftBracket->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// buttonRightBracket
			// 
			this->buttonRightBracket->Location = System::Drawing::Point(259, 102);
			this->buttonRightBracket->Name = L"buttonRightBracket";
			this->buttonRightBracket->Size = System::Drawing::Size(56, 40);
			this->buttonRightBracket->TabIndex = 21;
			this->buttonRightBracket->Text = L")";
			this->buttonRightBracket->UseVisualStyleBackColor = true;
			this->buttonRightBracket->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// buttonSin
			// 
			this->buttonSin->Location = System::Drawing::Point(13, 102);
			this->buttonSin->Name = L"buttonSin";
			this->buttonSin->Size = System::Drawing::Size(56, 40);
			this->buttonSin->TabIndex = 24;
			this->buttonSin->Text = L"Sin";
			this->buttonSin->UseVisualStyleBackColor = true;
			this->buttonSin->Click += gcnew System::EventHandler(this, &Calculator::buttonTrigonFunc_Click);
			// 
			// buttonCos
			// 
			this->buttonCos->Location = System::Drawing::Point(75, 102);
			this->buttonCos->Name = L"buttonCos";
			this->buttonCos->Size = System::Drawing::Size(56, 40);
			this->buttonCos->TabIndex = 25;
			this->buttonCos->Text = L"Cos";
			this->buttonCos->UseVisualStyleBackColor = true;
			this->buttonCos->Click += gcnew System::EventHandler(this, &Calculator::buttonTrigonFunc_Click);
			// 
			// buttonTan
			// 
			this->buttonTan->Location = System::Drawing::Point(136, 102);
			this->buttonTan->Name = L"buttonTan";
			this->buttonTan->Size = System::Drawing::Size(56, 40);
			this->buttonTan->TabIndex = 26;
			this->buttonTan->Text = L"Tan";
			this->buttonTan->UseVisualStyleBackColor = true;
			this->buttonTan->Click += gcnew System::EventHandler(this, &Calculator::buttonTrigonFunc_Click);
			// 
			// buttonExponent
			// 
			this->buttonExponent->Location = System::Drawing::Point(10, 148);
			this->buttonExponent->Name = L"buttonExponent";
			this->buttonExponent->Size = System::Drawing::Size(56, 40);
			this->buttonExponent->TabIndex = 27;
			this->buttonExponent->Text = L"^";
			this->buttonExponent->UseVisualStyleBackColor = true;
			this->buttonExponent->Click += gcnew System::EventHandler(this, &Calculator::buttonAlg_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->Location = System::Drawing::Point(10, 194);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(56, 40);
			this->buttonSqrt->TabIndex = 28;
			this->buttonSqrt->Text = L"√x";
			this->buttonSqrt->UseVisualStyleBackColor = true;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &Calculator::buttonSqrt_Click);
			// 
			// buttonFactorial
			// 
			this->buttonFactorial->Location = System::Drawing::Point(11, 240);
			this->buttonFactorial->Name = L"buttonFactorial";
			this->buttonFactorial->Size = System::Drawing::Size(56, 40);
			this->buttonFactorial->TabIndex = 29;
			this->buttonFactorial->Text = L"x!";
			this->buttonFactorial->UseVisualStyleBackColor = true;
			this->buttonFactorial->Click += gcnew System::EventHandler(this, &Calculator::buttonFactorial_Click);
			// 
			// buttonReciprocal
			// 
			this->buttonReciprocal->Location = System::Drawing::Point(12, 286);
			this->buttonReciprocal->Name = L"buttonReciprocal";
			this->buttonReciprocal->Size = System::Drawing::Size(56, 40);
			this->buttonReciprocal->TabIndex = 30;
			this->buttonReciprocal->Text = L"1/x";
			this->buttonReciprocal->UseVisualStyleBackColor = true;
			this->buttonReciprocal->Click += gcnew System::EventHandler(this, &Calculator::buttonReciprocal_Click);
			// 
			// buttonPi
			// 
			this->buttonPi->Location = System::Drawing::Point(72, 148);
			this->buttonPi->Name = L"buttonPi";
			this->buttonPi->Size = System::Drawing::Size(56, 40);
			this->buttonPi->TabIndex = 31;
			this->buttonPi->Text = L"Pi";
			this->buttonPi->UseVisualStyleBackColor = true;
			this->buttonPi->Click += gcnew System::EventHandler(this, &Calculator::buttonNumber_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 388);
			this->Controls->Add(this->buttonPi);
			this->Controls->Add(this->buttonReciprocal);
			this->Controls->Add(this->buttonFactorial);
			this->Controls->Add(this->buttonSqrt);
			this->Controls->Add(this->buttonExponent);
			this->Controls->Add(this->buttonTan);
			this->Controls->Add(this->buttonCos);
			this->Controls->Add(this->buttonSin);
			this->Controls->Add(this->buttonRightBracket);
			this->Controls->Add(this->buttonLeftBracket);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEC);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->resultBox);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
	// sender - це об'єкт, який викликав подію (в даному випадку, кнопка)

	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Перевіряємо, чи текст у resultBox дорівнює "0"
	if (resultBox->Text == "0")
	{
		// Якщо так, замінюємо текст resultBox на текст натиснутої кнопки
		resultBox->Text = btn->Text;
	}
	else
	{
		// Інакше, додаємо текст кнопки до існуючого тексту resultBox
		resultBox->Text += btn->Text;
	}
}

private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
	// Додаємо десятковий розділювач до останнього цілого числа у виразі у resultBox
	resultBox->Text = addCommaToLastInteger(resultBox->Text);
}

// Функція, що додає крапку (десятковий розділювач) до останнього цілого числа у виразі
private: System::String^ addCommaToLastInteger(System::String^ expression)
{
	if (String::IsNullOrEmpty(expression)) {
		return "0.";
	}

	// Регулярний вираз для пошуку останнього числа у виразі
	System::Text::RegularExpressions::Regex^ regex =
		gcnew System::Text::RegularExpressions::Regex(L"(\\d+\\.?\\d*)$");
	System::Text::RegularExpressions::Match^ match = regex->Match(expression);

	if (match->Success) {
		System::String^ lastNumber = match->Groups[1]->Value;
		if (!lastNumber->Contains(".")) {
			return expression + ".";
		}
		else {
			return expression; // Останнє число вже містить крапку, нічого не додаємо
		}
	}
	else {
		// Якщо вираз не закінчується числом, додаємо "0."
		return expression + "0.";
	}
}

private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	resultBox->Text = "0";
}

private: System::Void buttonEC_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримуємо поточний текст та його довжину
	System::String^ currentText = resultBox->Text;
	int textLength = currentText->Length; // System::String^ має властивість Length

	// Перевіряємо, чи довжина тексту більша за 1
	if (textLength > 1)
	{
		// Якщо так, беремо підрядок від початку до передостаннього символу
		// System::String::Substring(startIndex, length)
		// Нам потрібен підрядок довжиною textLength - 1, починаючи з індексу 0
		resultBox->Text = currentText->Substring(0, textLength - 1);
	}
	else
	{
		// Якщо текст порожній або має один символ, встановлюємо "0"
		resultBox->Text = "0";
	}
}

private: System::String^ Calculator::evaluatePowerOperation(System::String^ expression) {
	marshal_context^ context = gcnew marshal_context();
	std::string nativeExpression = context->marshal_as<std::string>(expression);
	// Регулярний вираз
	std::regex pattern(R"(([\d.]+)\s*\^\s*\(?(-?[\d.]+)\)?)");
	std::smatch match;
	std::string resultExpression = nativeExpression;

	while (std::regex_search(nativeExpression, match, pattern)) {
		if (match.size() == 3) {
			double baseNumber = std::stod(match[1].str());
			std::string exponentStr = match[2].str();

			// Видаляємо дужки, якщо вони є
			if (exponentStr.length() > 0 && exponentStr[0] == '(' && exponentStr.back() == ')') {
				exponentStr = exponentStr.substr(1, exponentStr.length() - 2);
			}

			double exponent = std::stod(exponentStr);
			double result = std::pow(baseNumber, exponent);

			size_t pos = nativeExpression.find(match[0].str());
			if (pos != std::string::npos) {
				nativeExpression.replace(pos, match[0].length(), std::to_string(result));
			}
		}
		else {
			break;
		}
	}

	return gcnew System::String(nativeExpression.c_str());
}

private: System::String^ replaceSqrt(System::String^ expression) {
	int pos = expression->IndexOf(L"√");
	while (pos != -1) {
		expression = expression->Remove(pos, 1)->Insert(pos, L"Sqrt");
		pos = expression->IndexOf(L"√", pos + 4); // Шукаємо наступний корінь після вставленого "sqrt"
	}
	return expression;
}

private: System::String^ Calculator::calculateFactorial(System::String^ expression) {
	System::String^ resultExpression = gcnew System::String(expression);
	std::regex factorialPattern(R"(\b(\d+)\!)"); // Шукаємо ціле число, за яким йде !

	marshal_context^ context = gcnew marshal_context();
	std::string nativeExpression = context->marshal_as<std::string>(resultExpression);
	std::smatch match;

	while (std::regex_search(nativeExpression, match, factorialPattern)) {
		if (match.size() == 2) {
			int number = std::stoi(match[1].str());
			long long factorialResult = Factorial(number);
			std::string replacement = std::to_string(factorialResult);

			size_t pos = nativeExpression.find(match[0].str());
			if (pos != std::string::npos) {
				nativeExpression.replace(pos, match[0].length(), replacement);
				resultExpression = gcnew System::String(nativeExpression.c_str()); // Оновлюємо керований рядок
				nativeExpression = context->marshal_as<std::string>(resultExpression); // Оновлюємо некерований рядок для наступного пошуку
			}
		}
		else {
			break;
		}
	}
	return resultExpression;
}

private: System::String^ replacePi(System::String^ expression) {
	System::String^ result = gcnew System::String(expression);
	System::String^ piString = L"Pi";
	double piValue = M_PI; // Значення числа Пі

	// Виконуємо пошук та заміну без урахування регістру
	int startIndex = 0;
	while (startIndex < result->Length) {
		int foundIndex = result->IndexOf(piString, startIndex, StringComparison::OrdinalIgnoreCase);
		if (foundIndex == -1) {
			break;
		}
		result = result->Remove(foundIndex, piString->Length)->Insert(foundIndex, piValue.ToString());
		startIndex = foundIndex + piValue.ToString()->Length;
	}
	return result->Replace(',', '.');
}

private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::String^ resultString = resultBox->Text;
		resultString = replacePi(resultString);
		resultString = calculateFactorial(resultString);
		resultString = replaceSqrt(resultString);
		resultString = evaluatePowerOperation(resultString);
		NCalc::Expression^ exp = gcnew NCalc::Expression(resultString);
		System::Object^ evaluationResult = exp->Evaluate();
		resultString = evaluationResult->ToString();
		resultString = resultString->Replace(',', '.');
		resultBox->Text = resultString;
	}
	catch (System::FormatException^ ex) {
		System::Windows::Forms::MessageBox::Show("Помилка формату!", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
	catch (NCalc::EvaluationException^ ex)
	{
		System::Windows::Forms::MessageBox::Show("Неправильне рівняння", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
}

private: System::Void buttonAlg_Click(System::Object^ sender, System::EventArgs^ e) {
	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Масив дозволених алгебраїчних операторів як System::String^
	array<System::String^>^ algs = { "*", "+", "-", "/", "^" };

	// Отримуємо поточний текст з resultBox
	System::String^ currentText = resultBox->Text;

	// Логіка 1: Якщо дисплей порожній або "0", і натиснуто "-", дозволяємо введення від'ємного числа
	if ((System::String::IsNullOrEmpty(currentText) || currentText == "0") && btn->Text == "-")
	{
		resultBox->Text = btn->Text; // Встановлюємо "-"
	}
	// Логіка 2: Якщо дисплей не порожній, застосовуємо правила додавання операторів
	else if (!System::String::IsNullOrEmpty(currentText)) // Використовуємо else if, бо перша умова вже оброблена
	{
		// Масив для перевірки, чи весь поточний текст не є "0" або "-"
		array<System::String^>^ arr = { "0", "-" };

		// Перевіряємо, чи весь поточний текст НЕ є "0" і НЕ є "-"
		if (System::Array::IndexOf(arr, currentText) == -1)
		{
			// Отримуємо останній символ поточного тексту як System::String^
			System::String^ lastSymb = currentText->Substring(currentText->Length - 1, 1);

			// Перевіряємо, чи натиснутий оператор відрізняється від останнього символу
			// І чи останній символ є одним із дозволених операторів
			if (btn->Text != lastSymb && System::Array::IndexOf(algs, lastSymb) != -1)
			{
				// Якщо так, замінюємо останній символ на новий оператор
				resultBox->Text = currentText->Substring(0, currentText->Length - 1) + btn->Text;
			}
			// Перевіряємо, чи натиснутий оператор відрізняється від останнього символу
			// І чи останній символ НЕ є одним із дозволених операторів (тобто, ймовірно, цифра або крапка)
			else if (btn->Text != lastSymb && System::Array::IndexOf(algs, lastSymb) == -1) // Використовуємо else if для чіткості
			{
				// Якщо так, просто додаємо новий оператор до кінця
				resultBox->Text += btn->Text;
			}
		}
	}
}

private: System::Void buttonTrigonFunc_Click(System::Object^ sender, System::EventArgs^ e) {
	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Перевіряємо, чи текст у resultBox дорівнює "0"
	if (resultBox->Text == "0")
	{
		// Якщо так, замінюємо текст resultBox на текст натиснутої кнопки
		resultBox->Text = btn->Text + "(";
	}
	else
	{
		// Інакше, додаємо текст кнопки до існуючого тексту resultBox
		resultBox->Text += btn->Text + "(";
	}
}

private: System::Void buttonExponent_Click(System::Object^ sender, System::EventArgs^ e) {
	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Перевіряємо, чи текст у resultBox не дорівнює "0" чи ""
	if (resultBox->Text != "0" || resultBox->Text != "")
	{
		// Якщо так, замінюємо текст resultBox на текст натиснутої кнопки
		resultBox->Text += "^";
	}
}

private: System::Void buttonReciprocal_Click(System::Object^ sender, System::EventArgs^ e) {
	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Перевіряємо, чи текст у resultBox дорівнює "0"
	if (resultBox->Text == "0")
	{
		// Якщо так, замінюємо текст resultBox на текст натиснутої кнопки
		resultBox->Text = "^(-1)";
	}
	else
	{
		// Інакше, додаємо текст кнопки до існуючого тексту resultBox
		resultBox->Text += "^(-1)";
	}
}

private: System::Void buttonFactorial_Click(System::Object^ sender, System::EventArgs^ e) {
	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Масив дозволених алгебраїчних операторів як System::String^
	array<System::String^>^ algs = { "*", "+", "-", "/", "^" };

	// Отримуємо поточний текст з resultBox
	System::String^ currentText = resultBox->Text;

	// Якщо дисплей не порожній, застосовуємо правила додавання операторів
	if (!System::String::IsNullOrEmpty(currentText))
	{
		// Масив для перевірки, чи весь поточний текст не є "0" або "-"
		array<System::String^>^ arr = { "0", "-" };

		// Перевіряємо, чи весь поточний текст НЕ є "0" і НЕ є "-"
		if (System::Array::IndexOf(arr, currentText) == -1)
		{
			// Отримуємо останній символ поточного тексту як System::String^
			System::String^ lastSymb = currentText->Substring(currentText->Length - 1, 1);

			// Перевіряємо, чи натиснутий оператор відрізняється від останнього символу
			// І чи останній символ є одним із дозволених операторів
			if (System::Array::IndexOf(algs, lastSymb) != -1)
			{
				// Якщо так, замінюємо останній символ на новий оператор
				resultBox->Text = currentText->Substring(0, currentText->Length - 1) + "!";
			}
			// Перевіряємо, чи натиснутий оператор відрізняється від останнього символу
			// І чи останній символ НЕ є одним із дозволених операторів (тобто, ймовірно, цифра або крапка)
			else if (System::Array::IndexOf(algs, lastSymb) == -1) // Використовуємо else if для чіткості
			{
				// Якщо так, просто додаємо новий оператор до кінця
				resultBox->Text += "!";
			}
		}
	}
}

private: System::Void buttonSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	// sender - це об'єкт, який викликав подію (в даному випадку, кнопка)

	// Приводимо sender до типу Button
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);

	// Перевіряємо, чи текст у resultBox дорівнює "0"
	if (resultBox->Text == "0")
	{
		// Якщо так, замінюємо текст resultBox на текст натиснутої кнопки
		resultBox->Text = L"√(";
	}
	else
	{
		// Інакше, додаємо текст кнопки до існуючого тексту resultBox
		resultBox->Text += L"√(";
	}
}
};
}
