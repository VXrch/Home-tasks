#include <iostream>

using namespace std;


void currency_to_uan(int choice, int amount, int action, string currency) {

	bool wrong_choice = false;
	double exchange_rate = 0;
	double result = 0;

	cout << "Enter the amount: "; cin >> amount;
	if (amount < 0) {
		cout << "Wrong number!" << endl; return;
	}

	cout << "[1] - Buy   or   [2] - Sell?\n"; cin >> action;

	if (action == 1) {
		switch (choice)
		{
		case 1: // USD - 37,6000
			exchange_rate = 37.6;
			break;
		case 2: // EUR - 40,3000
			exchange_rate = 40.3;
			break;
		case 3: // PLN - 8,5750
			exchange_rate = 8.575;
			break;
		case 4: // GBP - 45,3500
			exchange_rate = 45.35;
			break;
		case 5: // CHF - 40,8000
			exchange_rate = 40.8;
			break;
		default:
			cout << "Wrong choice!" << endl; wrong_choice = true;
			break;
		}

		if (wrong_choice == false) {
			result = amount * exchange_rate;
			cout << amount << currency << " = " << result << "UAN" << endl;
		}
	}
	else if (action == 2) {
		switch (choice)
		{
		case 1: // USD - 38,2500
			exchange_rate = 38.25;
			break;
		case 2: // EUR - 41,1500
			exchange_rate = 41.15;
			break;
		case 3: // PLN - 9,1450
			exchange_rate = 9.145;
			break;
		case 4: // GBP - 48,0000
			exchange_rate = 48.0;
			break;
		case 5: // CHF - 42,7750
			exchange_rate = 42.775;
			break;
		default:
			cout << "Wrong choice!" << endl; wrong_choice = true;
			break;
		}

		if (wrong_choice == false) {
			result = amount * exchange_rate;
			cout << amount << currency << " = " << result << "UAN" << endl;
		}
	}
	else {
		cout << "Wrong choice!" << endl; return;
	}
}

void uan_into_currency(int choice, int amount, int action, string currency) {

	bool wrong_choice = false;
	double exchange_rate = 0;
	double result = 0;

	cout << "Enter the amount: "; cin >> amount;
	if (amount < 0) {
		cout << "Wrong number!" << endl; return;
	}

	cout << "[1] - Buy   or   [2] - Sell?\n"; cin >> action;

	if (action == 1) {
		switch (choice)
		{
		case 1: // USD - 37,6000
			exchange_rate = 37.6;
			break;
		case 2: // EUR - 40,3000
			exchange_rate = 40.3;
			break;
		case 3: // PLN - 8,5750
			exchange_rate = 8.575;
			break;
		case 4: // GBP - 45,3500
			exchange_rate = 45.35;
			break;
		case 5: // CHF - 40,8000
			exchange_rate = 40.8;
			break;
		default:
			cout << "Wrong choice!" << endl; wrong_choice = true;
			break;
		}

		if (wrong_choice == false) {
			result = amount / exchange_rate;
			cout << amount << "UAN" << " = " << result << currency << endl;
		}
	}
	else if (action == 2) {
		switch (choice)
		{
		case 1: // USD - 38,2500
			exchange_rate = 38.25;
			break;
		case 2: // EUR - 41,1500
			exchange_rate = 41.15;
			break;
		case 3: // PLN - 9,1450
			exchange_rate = 9.145;
			break;
		case 4: // GBP - 48,0000
			exchange_rate = 48.0;
			break;
		case 5: // CHF - 42,7750
			exchange_rate = 42.775;
			break;
		default:
			cout << "Wrong choice!" << endl; wrong_choice = true;
			break;
		}

		if (wrong_choice == false) {
			result = amount / exchange_rate;
			cout << amount << "UAN" << " = " << result << currency << endl;
		}
	}
	else {
		cout << "Wrong choice!" << endl; return;
	}
}


void task_1() {

	//Вивести на екран усі числа від нуля до введеного користувачем числа.

	int number = 0;

	cout << "Enter number: "; cin >> number;

	for (int i = 0; i < number; i++)
	{
		cout << "[" << i << "]" << endl;
	}
}

void task_2() {

	//  Користувач вводить дві межі діапазону, вивести на екран усі числа з цього діапазону.Передбачити,
	//	щоб користувач міг вводити межі діапазону в довільному
	//	порядку.
	//	0 вивести всі парні числа з діапазону.
	//	0 вивести всі непарні числа з діапазону.
	//	0 вивести всі числа, кратні семи.

	int range_1 = 0;
	int range_2 = 0;

	cout << "Enter range (min): "; cin >> range_1;
	cout << "Enter range (max): "; cin >> range_2;

	for (int i = range_1; i < range_2; i++)
	{
		if (i % 2 == 0) {
			cout << "Even number: " << i << "\t";
		}
		else {
			cout << "Odd number: " << i << endl;
		}

		if (i % 7 == 0) {
			cout << i << "a multiple of seven";
		}
	}
}

void task_3() {
	// Користувач вводить дві межі діапазону.Порахувати суму всіх чисел діапазону.

	int range_1 = 0;
	int range_2 = 0;
	int numbers_sum = 0;

	cout << "Enter range (min): "; cin >> range_1;
	cout << "Enter range (max): "; cin >> range_2;

	for (int i = range_1; i < range_2; i++)
	{
		numbers_sum += i;
	}

	cout << "Sum: " << numbers_sum << endl;
}

void task_4() {

	// Користувач з клавіатури вводить числа.
	// Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.

	bool ext = false;
	int numb = 0;
	int numbers_sum = 0;

	while (ext == false)
	{
		cout << "Enter number: "; cin >> numb;

		if (numb != 0) {
			numbers_sum += numb;
		}
		else {
			ext = true;
		}
	}

	cout << "Sum: " << numbers_sum << endl;
}

void task_5() {

	//	Написати гру «Вгадай число».Програма
	//	загадує число в діапазоні від 1 до 500. 
	//  Користувач намагається його вгадати.
	//  Після кожної спроби програма
	//	видає підказки, чи його число є більшим або меншим за
	//	задумане.У кінці програма видає статистику : за скільки
	//	спроб угадано число, скільки часу це зайняло.
	//  Передбачити вихід за допомогою 0, у разі, якщо користувачеві
	//	набридло вгадувати число.

	bool ext = false;

	int numb = 0;
	int counter = 0;
	int guessed_number = 0;

	guessed_number = 1 + rand() % 500;

	while (ext == false)
	{
		cout << "Enter number: "; cin >> numb;


		if (numb == 0) {
			cout << "Bye-bye!" << endl;
			ext = true;
		}
		else if (numb == guessed_number) {
			cout << "You win!" << endl << "You have made " << counter << " attempts!" << endl;
		}
		else if (numb < guessed_number) {
			cout << "You number < guessed number!" << endl;
		}
		else if (numb > guessed_number) {
			cout << "You number > guessed number!" << endl;
		}
	}
}

void task_6() {

	// Написати програму — конвертер валют.
	// Реалізувати спілкування з користувачем через меню.

	string currency = "";
	float amount = 0;
	int choice = 0;
	int action = 0;
	int into_or_to = 0;

	cout << "Choose a currency:\n[1] - USD\n[2] - EUR\n[3] - PLN\n[4] - GBP\n[5] - CHF\n"; cin >> choice;
	if (choice > 0 && choice < 6) {
		switch (choice)
		{
		case 1: currency = "USD"; break;
		case 2: currency = "EUR"; break;
		case 3: currency = "PLN"; break;
		case 4: currency = "GBP"; break;
		case 5: currency = "CHF"; break;
		}
	}
	else {
		cout << "Wrong choice!" << endl; return;
	}

	cout << "[1] - " << currency << " into UAN   or   [2] - UAN into " << currency << "?\n"; cin >> into_or_to;
	if (into_or_to == 1) {
		currency_to_uan(choice, amount, action, currency);
	}
	else if (into_or_to == 2) {
		uan_into_currency(choice, amount, action, currency);
	}
	else {
		cout << "Wrong choice!" << endl; return;
	}


}

void main() {

	int task_number = 0;

	cout << "Enter task number (1-6): "; cin >> task_number;

	if (task_number == 1) {
		task_1();
	}
	else if (task_number == 2) {
		task_2();
	}
	else if (task_number == 3) {
		task_3();
	}
	else if (task_number == 4) {
		task_4();
	}
	else if (task_number == 5) {
		task_5();
	}
	else if (task_number == 6) {
		task_6();
	}
	else {
		cout << "Wrong choice!" << endl;
	}
}