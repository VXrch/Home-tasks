#include <iostream>

using namespace std;

void Print(int arr[], int size) {

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

void Fill(int arr[], int size, int range1 = 10, int range2 = 90) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = range1 + rand() % range2;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int* MinNumber1(int* pa, int* pb, int* pc) {

	if (*pa < *pb && *pa < *pc){

		return pa;
	}
	else if (*pb < *pa && *pb < *pc){

		return pb;
	}
	else {

		return pc;
	}
}

float Average1(int* pa, int* pb, int* pc) {

	float average = *pa + *pb + *pc;
	average /= 3;

	return average;
}

float Product1(int* pa, int* pb, int* pc) {

	float product = *pa * *pb * *pc;
	return product;
}

void task_1() {

	/*	Дано три числа. Оголосити вказівники на ці числа.Отримати добуток трьох
		заданих чисел, середє арифметичне, найменше з них, користуючись
		непрямим доступом до чисел(через вказівники).*/

	int a = rand() % 10 + 90; int* pa = &a; cout << "A = " << *pa << endl;
	int b = rand() % 10 + 90; int* pb = &b; cout << "B = " << *pb << endl;
	int c = rand() % 10 + 90; int* pc = &c; cout << "C = " << *pc << endl;

	int* pMIN = MinNumber1(pa, pb, pc);
	cout << "Min number = " << *pMIN << endl;

	float average = Average1(pa, pb, pc);
	cout << "Average = " << average << endl;

	float product = Product1(pa, pb, pc);
	cout << "Product = " << product << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int& MinNumber2(int &a, int &b, int &c) {

	if (a < b && a < c ){

		return a;
	}
	else if (b < a && b < c) {

		return b;
	}
	else {

		return c;
	}
}

float Average2(int &a, int& b, int& c) {

	float average = a + b + c;
	average /= 3;

	return average;
}

float Product2(int& a, int& b, int& c) {

	float product = a * b * c;
	return product;
}

void task_2() {

	/*	Дано три числа.Оголосити ссилки на ці числа.
		Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них,
		користуючись непрямим доступом до чисел(через ссилку)*/

	int a = rand() % 10 + 90; cout << "A = " << a << endl;
	int b = rand() % 10 + 90; cout << "B = " << b << endl;
	int c = rand() % 10 + 90; cout << "C = " << c << endl;

	int min_numb = MinNumber2(a, b, c);
	cout << "Min number = " << min_numb << endl;

	float average = Average2(a, b, c);
	cout << "Average = " << average << endl;

	float product = Product2(a, b, c);
	cout << "Product = " << product << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SwapValues(int& a, int& b) {
	
	int temp = a;
	a = b;
	b = temp;
}

void task_3() {

	/*	Написать функцію(або шаблон), яка приймає дві ссилки на змінні і
		виконує обмін значень.За допомогою написаної функції поміняти місцями
		у матриці перший та другий стовпці.*/

	const int size = 10;
	int arr[size];

	Fill(arr, size, 10, 90);
	Print(arr, size);
	
	int j = size / 2;

	for (int i = 0; i < size / 2; i++)
	{
		SwapValues(arr[i], arr[j]); j++;
	}

	Print(arr, size);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ReversPrint(int *arr, const int *size) {

	int counter = 0;

	for (int i = *size - 1; i > -1; i--)
	{
		if (i < 10)
			cout << "[ " << i << "] = " << *(arr + i) << "   ";
		else
			cout << "[" << i << "] = " << *(arr + i) << "   ";

		counter++;

		if (counter == 5) {
			cout << endl; counter = 0;
		}
	}
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
}

void task_4() {

	/*	Дано цілочисельний одновимірний масив.Заповнити його,
		вивести на екран у прямому та зворотньому порядку та порахувати
		суму елементів з використанням вказівників.*/

	const int size = 10;
	const int* pSize = &size;

	int arr[size];

	Fill(arr, size, 10, 90);
	Print(arr, size);

	ReversPrint(arr, pSize);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int* arr, int size) {

	int max = 1, maxIter = -1;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max) {
			max = *(arr + i);
			maxIter = i;
		}
	}
	return maxIter;
}

int FindMin(int* arr, int size) {

	int min = 101, minIter = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < min) {
			min = *(arr + i);
			minIter = i;
		}
	}
	return minIter;
}

void task_5() {

	/*	Дано одновимірний масив.Знайти найбільше та найменше значення у
		масиві та поміняти їх у масиві місцями.Вивести перетворений
		масив на екран.*/

	const int size = 10;
	int arr[size];

	Fill(arr, size, 10, 90);
	Print(arr, size);

	int iterMax = FindMax(arr, size); cout << "Max = " << arr[iterMax] << " --- " << iterMax << endl;
	int iterMin = FindMin(arr, size); cout << "Min = " << arr[iterMin] << " --- " << iterMin << endl << endl;

	SwapValues(arr[iterMax], arr[iterMin]);
	Print(arr, size);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main() {

	srand(time(NULL));

	int choice = 0;

	cout << "Enter task number (1-5): "; cin >> choice;

	switch (choice) {
	case 1: task_1(); break;
	case 2: task_2(); break;
	case 3: task_3(); break;
	case 4: task_4(); break;
	case 5: task_5(); break;
	default: cout << "Wrong choice!" << endl; break;
	}
}