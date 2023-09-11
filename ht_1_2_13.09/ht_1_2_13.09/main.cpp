#include <iostream>

using namespace std;

void task_a() {

	int A = 10;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_b() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}

}

void task_c() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j && i + j <= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_d() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j >= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_e() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j >= A - 1 || i <= j && i + j <= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_f() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j <= A - 1 || i <= j && i + j >= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_g() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j <= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_h() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j && i + j >= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_i() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i + j <= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}

void task_j() {

	int A = 9;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i + j >= A - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
}


void task_1() {
	// Завдання 1. Користувач вводить число.
	// Визначити кількість цифр у цьому числі, 
	// порахувати їхню суму та середнє арифметичне.
	// Визначити кількість нулів у цьому числі.
	// Спілкування з користувачем організувати через меню.

	int zero_count = 0;
	int number = 0;
	int count = 0;
	int sum = 0;

	cout << "Enter your number: "; cin >> number;

	int temp_number = number;
	while (temp_number != 0) {

		int num = temp_number % 10;
		sum += num;
		count++;

		if (num == 0) {
			zero_count++;
		}

		temp_number /= 10;
	}

	double average = 0;
	average = static_cast<double>(sum) / count;

	cout << "Counter of numbers: " << count << endl;
	cout << "Numbers sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Counter of zeros.: " << zero_count << endl;
}

void task_2() {

	int board_size = 0;
	int counter = 0;

	cout << "Enter board size: "; cin >> board_size;

	for (int i = 0; i < board_size; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			if (counter == 1) {
				cout << "[--] ";
				counter = 0;
			}
			else {
				cout << "[  ] ";
				counter = 1;
			}
		}

		if (board_size % 2 == 0) {
			if (counter > 0) {
				counter = 0;
			}
			else {
				counter = 1;
			}
		}
		cout << "\n\n";
	}
}

void main() {


	int home_work_number = 0;
	int task_number = 0;

	cout << "Enter home work number (1 or 2): "; cin >> home_work_number;

	if (home_work_number == 1) {

		cout << "Enter task number (or 0 to show all): "; cin >> task_number;

		switch (task_number)
		{
		case 1: task_a(); break;
		case 2: task_b(); break;
		case 3: task_c(); break;
		case 4: task_d(); break;
		case 5: task_e(); break;
		case 6: task_f(); break;
		case 7: task_g(); break;
		case 8: task_h(); break;
		case 9: task_i(); break;
		case 10: task_j(); break;
		case 0:
			task_a(); cout << "\n\n\n"; task_b(); cout << "\n\n\n";
			task_c(); cout << "\n\n\n"; task_d(); cout << "\n\n\n";
			task_e(); cout << "\n\n\n"; task_f(); cout << "\n\n\n";
			task_g(); cout << "\n\n\n"; task_h(); cout << "\n\n\n";
			task_i(); cout << "\n\n\n"; task_j(); cout << "\n\n\n";
			break;

		default: cout << "Wrong number!" << endl; break;
		}
	}
	else if (home_work_number == 2) {

		int task = 0;

		cout << "Enter task number (1-2): "; cin >> task;
		if (task == 1) {
			task_1();
		}
		else if (task == 2) {
			task_2();
		}
		else {
			cout << "Wrong number!" << endl;
		}
	}
	else {
		cout << "Wrong number!" << endl;
	}
}