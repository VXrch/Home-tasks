#include <iostream>
#include <conio.h>

using namespace std;

char* Enter_your_line(int Size, int &counter) {

	char *arr = new char[Size];

	char ch = ' ';

	cin.ignore();

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

	return arr;
}

void HowManyLetters(char *arr, int Size) {

	int letters_in_line = 0;
	int temp = 0;

	for (int i = 0; i < Size; i++)
	{
		temp = static_cast<int>(arr[i]);
		if (temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122) {
			letters_in_line++;
		}
	}

	cout << "In this line [" << letters_in_line << "] letters" << endl;
}

void HowManyNumbers(char *arr, int Size) {

	int numbers_in_line = 0;
	int temp;

	for (int i = 0; i < Size; i++)
	{
		temp = static_cast<int>(arr[i]);
		if (temp >= 48 && temp <= 57) {
			numbers_in_line++;
		}
	}

	cout << "In this line [" << numbers_in_line << "] numbers" << endl;
}

void HowManySpaces(char *arr, int Size) {

	int enters_in_line = 0;

	for (int i = 0; i < Size; i++)
	{
		if (static_cast<int>(arr[i]) == 32) {
			enters_in_line++;
		}
	}

	cout << "In this line [" << enters_in_line << "] spaces" << endl;
}

void HowManyVovelLetters(char* arr, int Size) {

	int vowel_letters = 0;
	int temp = 0;

	for (int i = 0; i < Size; i++)
	{
		temp = static_cast<int>(arr[i]);

		if (temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122) {

			if (temp == 97 || temp == 101 || temp == 105 || temp == 111 || temp == 117 || temp == 65 || temp == 69 || temp == 73 || temp == 79 || temp == 85) {

				vowel_letters++;
			}
		}
	}

	cout << "In this line [" << vowel_letters << "] vowel letters" << endl;
}

void HowManyConsonantLetters(char* arr, int Size) {

	int consonant_letters = 0;
	int temp = 0;

	for (int i = 0; i < Size; i++)
	{
		temp = static_cast<int>(arr[i]);
		if (temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122) {

			if (temp != 65 && temp != 69 && temp != 73 && temp != 79 && temp != 85) {

				if (temp != 97 && temp != 101 && temp != 105 && temp != 111 && temp != 117)
				{
					consonant_letters++;
				}
			}
		}
	}

	cout << "In this line [" << consonant_letters << "] consonant letters" << endl;
}

void FullStatistic(char *arr, int Size) {

	HowManyLetters(arr, Size);
	HowManyNumbers(arr, Size);
	HowManySpaces(arr, Size);
	HowManyConsonantLetters(arr, Size);
	HowManyVovelLetters(arr, Size);
}

void task_1() {

	// Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?
	
	int a_in_line = 0;
	int o_in_line = 0;
	int counter = 0;
	int length = 0;
	char ch = '-';

	int Size = 200;
	char *arr;

	arr = Enter_your_line(Size, counter);

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

	delete[] arr;
}

void task_2() {

	// Вводиться рядок.Порахувати кількість латинських букв, цифр та пробілів у рядку.

	int Size = 200;
	char *arr;
	
	int counter = 0;
	char ch;

	arr = Enter_your_line(Size, counter);

	HowManyLetters(arr, Size);
	HowManyNumbers(arr, Size);
	HowManySpaces(arr, Size);

	delete[]arr;
}

void task_3() {

	// Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.

	int counter = 0;
	char ch;

	int Size = 200;
	char *arr;

	arr = Enter_your_line(Size, counter);

	for (int i = 0; i < counter; i++)
	{
		if (static_cast<int>(arr[i]) >= 65 && static_cast<int>(arr[i]) <= 90) {

			arr[i] += 32;
		}
		else if (static_cast<int>(arr[i]) != 32){

			arr[i] -= 32;
		}
	}

	for (int i = 0; i < counter; i++)
	{
		cout << arr[i];
	}

	delete[]arr;
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

	delete[]arr;
}

void task_5() {

	// Дано рядок. Видалити із рядка заданий символ.
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

	delete[]arr;
}

void task_6() {

	/*	Розробити програму, яка зчитує з екрану рядок,
		а потім видає статистику :
		кількість пробільних символів(whitespaces),
		голосних, приголосних, знаків пунктуації.
		Введення передбачається англомовним. 
	*/

	int Size = 200;
	char *arr = new char[Size];

	int counter = 0;

	arr = Enter_your_line(Size, counter);

	cout << "\nTotal line size: " << counter << endl;

	FullStatistic(arr, Size);

	delete[]arr;
}

void main() {

	int choice = 0;

	cout << "Enter task number (1-6): "; cin >> choice;

	switch (choice) {
	case 1: task_1(); break;
	case 2: task_2(); break;
	case 3: task_3(); break;
	case 4: task_4(); break;
	case 5: task_5(); break;
	case 6: task_6(); break;
	default: cout << "Wrong choice!" << endl; break;
	}
}