#include <iostream>

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void task_1() {

	/*  Створити 3 динамічних змінних різного типу.
		Заповнити їх деякими значеннями.Обчислити і вивести на екран їх добуток,
		а також самі значення динамічних змінних.*/

	int* a = new int(5);
	float* b = new float(2.3);
	double* c = new double(9.56735);

	double result = *a * *b * *c;

	cout << "A = " << a << endl << "B = " << b << endl << "C = " << c << endl;
	cout << "a * b * c = " << result << endl;

	delete a;
	delete b;
	delete c;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int* Fill(int size) {

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = 10 + rand() % 90;
	}

	return arr;
}

bool Correct_index(int size, int index) {

	if (0 <= index && index < size) {
		return true;
	}

	cout << "Index must be < size and >= 0" << endl;
	return false;
}

void Print(int* arr, int size) {

	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (i < 10)
			cout << "[ " << i << "] = " << arr[i] << "   ";
		else
			cout << "[" << i << "] = " << arr[i] << "   ";

		counter++;

		if (counter == 5) {
			cout << endl; counter = 0;
		}
	}
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
}

void AddElementEnd(int*& arr, int& size, int element_to_add) {

	int* temp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	temp[size] = element_to_add;

	delete[] arr;
	arr = temp;
	size++;
}

void AddElementEnd(int*& arr, int& size) {

	int* temp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	temp[size] = 10 + rand() % 90;

	delete[] arr;
	arr = temp;
	size++;
}

void AddElementByIndex(int*& arr, int& size, int index, int element_to_add) {

	if (Correct_index(size, index) == false)
		return;

	int* temp = new int[size + 1];
	int k = 0;

	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	temp[index] = element_to_add;

	for (int i = index + 1; i < size + 1; i++)
	{
		temp[i] = arr[i - 1];
	}

	delete[] arr;
	arr = temp;
	size++;
}

void AddElementByIndex(int*& arr, int& size, int index) {

	if (Correct_index(size, index) == false)
		return;

	int* temp = new int[size + 1];
	int k = 0;

	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	temp[index] = rand() % 10 + 90;

	for (int i = index + 1; i < size + 1; i++)
	{
		temp[i] = arr[i - 1];
	}

	delete[] arr;
	arr = temp;
	size++;
}

void task_2() {

	/*	Написати функції для роботи з динамічним одновимірним масивом :
		Функція створення динамічного масиву вказаного розміру і
		його заповнення випадковими числами.
		Функція повертає адресу створеного масиву.
		Виводу масиву
		Доповнення масиву одним елементом.
		Функція отримує адресу масиву, розмір та елемент для доповнення.
		Видалення елемента з кінця.
		Видалення елемента  за індексом.
		Вставка нового елемента у довільну допустиму позицію у масиві
		Меню*/

	srand(time(NULL));

	int size = 0, index = 0, number_to_add = 0, choice = 0;
	bool ext = false;

	cout << "Enter size: "; cin >> size;

	int* arr = Fill(size);
	Print(arr, size);

	while (ext == false)
	{
		cout << "Enter what to do:\n[1] - Add random number to end\n[2] - Add your number to end\n[3] - Add random number by index\n[4] - Add your number by index\n"; cin >> choice;

		switch (choice)
		{
		case 0: 
			cout << "Bye-bye!" << endl; 
			ext = true; break;

		case 1:
			AddElementEnd(arr, size); break;

		case 2:
			cout << "Enter number to add: "; cin >> number_to_add;
			AddElementEnd(arr, size, number_to_add); break;

		case 3:
			cout << "Enter index: "; cin >> index;
			AddElementByIndex(arr, size, index); break;

		case 4:
			cout << "Enter index: "; cin >> index;
			cout << "Enter number to add: "; cin >> number_to_add;
			AddElementByIndex(arr, size, index, number_to_add); break;

		default: cout << "Wrong number!" << endl; break;
		}
		Print(arr, size);
	}

	delete[] arr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main() {

	int task_number = 0;

	cout << "Enter task number: "; cin >> task_number;

	if (task_number == 1) {
		task_1();
	}
	else if (task_number == 2) {
		task_2();
	}
	else {
		cout << "Wrong number!" << endl;
	}
}