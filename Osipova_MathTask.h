

#ifndef _OSIPOVA_MATHTASK_H
#define _OSIPOVA_MATHTASK_H

#include <iostream>
#include <map>
#include <string>
#include <functional>


using namespace std;


bool UserInt(const std::string& input)
{
	// Проверяем, что строка не пустая
	if (input.empty()) {
		return false;
	}

	// Проверяем, что все символы в строке - цифры
	bool OnlyInt = true;
	for (size_t i = 0; i < input.length(); ++i) {
		if (!std::isdigit(input[i])) {
			OnlyInt = false;
			break;
		}
	}
	if (!OnlyInt) {
		return false;
	}
	return 0;
}



bool UserInput(string input) {

	//если строка пустая - ввод некорректен
	if (input.empty()) return false;

	//попытаться
	try {

		//преобразование введенного значения в тип int

		int number = stoi(input);
		if (number < 0) return false;
	}

	catch (...) //если возникла ошибка в блоке try

	{
		return false;
	}

	return true;
}

void enterNumber(int& varLink, string label)

{
	string str_input;
	cout << label << " = ";

	//ввод значения в текстовом виде

	getline(cin, str_input);

	//пока ввод некорректен

	while (!UserInput(str_input)) {
		cout << label << " = ";

		//ввод значения в текстовом виде
		getline(cin, str_input);
	}

	//присвоение переменной varLink преобразованного 
	// в тип int 
	//правильно введенного текстового значения 

	varLink = stoi(str_input);

}

int CalcRectangleArea(int NumberA, int NumberB)
{
	return NumberA * NumberB;
}


#endif