#include <iostream>
#include <conio.h>

using namespace std;

void task_1() {

	// Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?
	
	int a_in_line = 0;
	int o_in_line = 0;
	int length = 0;
	char ch = '-';

	const int Size = 200;
	char arr[Size];

	cout << "Enter your line (and [\\n] to exit): " << endl;
	
	for (int i = 0; i < Size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {
			arr[i] = '\0';
			break;
		}
		else {
			arr[i] = ch;
		}
	}

	for (int i = 0; i < Size; i++)
	{
		if (static_cast<int>(arr[i]) == 97 || static_cast<int>(arr[i]) == 65) {
			a_in_line++;
		}
		else if (static_cast<int>(arr[i]) == 79 || static_cast<int>(arr[i]) == 111) {
			o_in_line++;
		}
	}

	cout << "In this line [" << a_in_line << "] \"A\" symbhols\nIn this line [" << o_in_line << "] \"O\" symbhols!" << endl;
	
	if (a_in_line > o_in_line){
		cout << "A > O" << endl;
	}
	else if (o_in_line > a_in_line) {
		cout << "O > A" << endl;
	}
	else {
		cout << "A = O" << endl;
	}
}

void task_2() {

	// Вводиться рядок.Порахувати кількість латинських букв, цифр та пробілів у рядку.

	const int Size = 200;
	char arr[Size];
	char ch;

	int letters_in_line = 0;
	int numbers_in_line = 0;
	int enters_in_line = 0;

	cout << "Enter your line (and [\\n] to exit): " << endl;

	for (int i = 0; i < Size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {
			arr[i] = '\0';
			break;
		}
		else {
			arr[i] = ch;
		}
	}

	for (int i = 0; i < Size; i++)
	{
		if (arr[i] == '0' || arr[i] == '1' || arr[i] == '2' || arr[i] == '3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9') {
			numbers_in_line++;
		}
		else if (arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122) {
			letters_in_line++;
		}
		else if (static_cast<int>(arr[i]) == 32) {
			enters_in_line++;
		}
	}

	cout << "In this line [" << enters_in_line << "] spaces" << endl;
	cout << "In this line [" << letters_in_line << "] letters" << endl;
	cout << "In this line [" << numbers_in_line << "] numbers" << endl;
}

void task_3() {

	// Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.

	int counter = 0;
	char ch;

	const int Size = 200;
	char arr[Size];

	cout << "Enter your line (and [\\n] to exit): " << endl;

	for (int i = 0; i < Size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {
			arr[i] = '\0';
			break;
		}
		else {
			arr[i] = ch;
		}

		counter++;
	}

	for (int i = 0; i < counter; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90) {

			arr[i] += 32;
		}
		else if (arr[i] != 32){

			arr[i] -= 32;
		}
	}

	for (int i = 0; i < counter; i++)
	{
		cout << arr[i];
	}
}

void task_4() {

	// Написати функцію, яка отримує рядок і повертає довжину рядка. 
	// Без використання функції strlen()

	int counter = 0;
	char ch;

	const int Size = 200;
	char arr[Size];

	cout << "Enter your line (and [\\n] to exit): " << endl;

	for (int i = 0; i < Size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {
			arr[i] = '\0';
			break;
		}
		else {
			arr[i] = ch;
			counter++;
		}
	}

	cout << "Line len: " << counter;
}

void task_5() {

	// Дано рядок.Видалити із рядка заданий символ.
	// Результат розмістити у новому рядку.

	char symbhol_to_deleete;
	int counter = 0;
	int found = 0;
	int iter = 0;
	int j;
	char ch;

	const int Size = 200;
	char arr[Size];
	char arr2[Size];

	cout << "Enter your line (and [\\n] to exit): " << endl;

	for (int i = 0; i < Size - 1; i++)
	{
		cin.get(ch);

		if (ch == '\n') {
			arr[i] = '\0';
			break;
		}
		else {
			arr[i] = ch;
			counter++;
		}
	}

	cout << "Enter symbhol_to_deleete: "; cin >> symbhol_to_deleete;

	for (int i = 0; i < counter; i++)
	{
		if(found == true){

			arr2[j] = arr[i];
		}
		else {
			arr2[i] = arr[i];
		}

		if (arr[i] == symbhol_to_deleete && found == false){

			found = true; j = i - 1;
		}
	}

	for (int i = 0; i < counter; i++)
	{
		cout << arr[i];
	}
}

void task_6() {

	/*	Розробити програму, яка зчитує з екрану рядок,
		а потім видає статистику :
		кількість пробільних символів(whitespaces),
		голосних, приголосних, знаків пунктуації.
		Введення передбачається англомовним. 
	*/



}

void main() {

	task_5();
}