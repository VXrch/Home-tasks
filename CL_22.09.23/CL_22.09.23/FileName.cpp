#include <iostream>

using namespace std;

void Fill(int arr[], int size, int range1 = 10, int range2 = 90) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = range1 + rand() % range2;
	}
}

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

void QuickSort(int arr[], int B, int E) {

	int i = B;
	int j = E;

	int temp = 0, p = 0;
	p = arr[(B + E) / 2];

	do
	{
		while (arr[i] < p) i++;
		while (arr[j] > p) j--;

		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (B < j)QuickSort(arr, B, j);
	if (E > i)QuickSort(arr, i, E);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ChangeNumbers(int *parr, int size) {

	int temp;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			temp = *(parr + i);
			*(parr + i) = *(parr + i + 1);
			*(parr + i + 1) = temp;
		}
	}
}

void task_1() {

	/*	Дано масив цілих чисел.Скориставшись покажчика -
		ми, поміняйте місцями елементи масиву з парними й
		непарними індексами(тобто ті елементи масиву, які
		стоять на парних місцях, поміняйте з елементами, які
		стоять на непарних місцях).*/

	const int size = 10;
	int arr[size];

	Fill(arr, size);
	Print(arr, size);

	int* parr = &arr[0];

	ChangeNumbers(parr, size);
	Print(arr, size);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CombinateArrays(int* parrC, const int *psizeC, int* parrA, const int *psizeA, int* parrB, const int* psizeB) {

	int j = 0;

	for (int i = 0; i < *psizeB; i++)
	{
		*(parrC + i) = *(parrB + i);
	}
	for (int i = *psizeB; i < *psizeC; i++)
	{
		*(parrC + i) = *(parrA + j); j++;
	}
}

void task_2() {

	/*	Дано два масиви, упорядковані за зростанням : А[n]
		та B[m].Сформуйте масив C[n + m], що складається
		з елементів масивів А і В, упорядкований за зростан -
		ням.Використовуйте синтаксис покажчиків.*/

	const int sizeA = 10;
	int arrA[sizeA];
	Fill(arrA, sizeA); 
	QuickSort(arrA, 0, sizeA - 1);
	
	const int* psizeA = &sizeA;
	int* parrA = &arrA[0];

	cout << "ARR A:" << endl;
	Print(arrA, sizeA);


	const int sizeB = 5;
	int arrB[sizeB];

	Fill(arrB, sizeB);  
	QuickSort(arrB, 0, sizeB - 1);

	const int* psizeB = &sizeB;
	int* parrB = &arrB[0];

	cout << "ARR B:" << endl;
	Print(arrB, sizeB);



	const int sizeC = sizeA + sizeB;
	int arrC[sizeC];

	const int* psizeC = &sizeC;
	int* parrC = &arrC[0];

	CombinateArrays(parrC, psizeC, parrA, psizeA, parrB, psizeB);
	cout << "ARR C:" << endl;
	Print(arrC, sizeC);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void Common_values(int* parrC, const int* psizeC, int* parrA, const int* psizeA, int* parrB, const int* psizeB) { // The same values in two arrays
	
	int k = 0;
	int size = *psizeC;
	int* arr = new int[size];

	for (int i = 0; i < *psizeC; i++)
	{
		arr[i] = 0;
		*(parrC + i) = 0;
	}

	for (int i = 0; i < *psizeA; i++)
	{
		for (int j = 0; j < *psizeB; j++)
		{
			if (*(parrA + i) == *(parrB + j))
			{
				arr[k] = *(parrA + i); k++;
			}
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		for (int j = 0; j < *psizeC; j++)
		{
			if (arr[i] == arr[j] && i != j) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		*(parrC + i) = arr[i];
	}
} 

void Different_elements(int* parrC, const int* psizeC, int* parrA, const int* psizeA, int* parrB, const int* psizeB) {

	int k = 0;
	int size = *psizeC;
	int* arr = new int[size];

	for (int i = 0; i < *psizeC; i++)
	{
		arr[i] = 0;
		*(parrC + i) = 0;
	}

	bool add_element = true;

	for (int i = 0; i < *psizeA; i++)
	{
		for (int j = 0; j < *psizeB; j++)
		{
			if (*(parrA + i) == *(parrB + j))
			{
				add_element = false;
			}
		}
		if (add_element == true) {
			arr[k] = *(parrA + i); k++;
		}
		else {
			add_element = true;
		}
	}

	for (int i = 0; i < *psizeB; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(parrB + i) == arr[j])
			{
				add_element = false;
			}
		}
		if (add_element == true) {
			arr[k] = *(parrB + i); k++;
		}
		else {
			add_element = true;
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		for (int j = 0; j < *psizeC; j++)
		{
			if (arr[i] == arr[j] && i != j) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		*(parrC + i) = arr[i];
	}
}

void Print_results(int arr[], int size) {

	bool printed = false;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0) {
			cout << "Arr [" << i << "] = " << arr[i] << endl; printed = true;
		}
	}
	if (printed == false) {
		cout << "Nothing to print!" << endl;
	}
}

void Different_A_B(int* parrC, const int* psizeC, int* parrA, const int* psizeA, int* parrB, const int* psizeB) {
	
	int k = 0;
	int size = *psizeC;
	int* arr = new int[size];

	for (int i = 0; i < *psizeC; i++)
	{
		arr[i] = 0;
		*(parrC + i) = 0;
	}

	bool add_element = true;

	for (int i = 0; i < *psizeA; i++)
	{
		for (int j = 0; j < *psizeB; j++)
		{
			if (*(parrA + i) == *(parrB + j))
			{
				add_element = false;
			}
		}
		if (add_element == true) {
			arr[k] = *(parrA + i); k++;
		}
		else {
			add_element = true;
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		for (int j = 0; j < *psizeC; j++)
		{
			if (arr[i] == arr[j] && i != j) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		*(parrC + i) = arr[i];
	}
}

void Different_B_A(int* parrC, const int* psizeC, int* parrA, const int* psizeA, int* parrB, const int* psizeB) {

	int k = 0;
	int size = *psizeC;
	int* arr = new int[size];

	for (int i = 0; i < *psizeC; i++)
	{
		arr[i] = 0;
		*(parrC + i) = 0;
	}

	bool add_element = true;

	for (int i = 0; i < *psizeB; i++)
	{
		for (int j = 0; j < *psizeA; j++)
		{
			if (*(parrB + i) == *(parrA + j))
			{
				add_element = false;
			}
		}
		if (add_element == true) {
			arr[k] = *(parrB + i); k++;
		}
		else {
			add_element = true;
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		for (int j = 0; j < *psizeC; j++)
		{
			if (arr[i] == arr[j] && i != j) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 0; i < *psizeC; i++)
	{
		*(parrC + i) = arr[i];
	}
}

void task_3() {

	/*	Дано два масиви : А[n] і B[m].Необхідно створити
		третій масив, у якому потрібно зібрати :
		■ Елементи обох масивів;
		■ Загальні елементи двох масивів;
		■ Елементи масиву A, які не включаються до B;
		■ Елементи масиву B, які не включаються до A;
		■ Елементи масивів A і B, які не є загальними для них
		(тобто об'єднання результатів двох попередніх варіантів).*/

	int option = 0;

	const int sizeA = 10;
	int arrA[sizeA];
	Fill(arrA, sizeA, 1, 10);
	QuickSort(arrA, 0, sizeA - 1);

	const int* psizeA = &sizeA;
	int* parrA = &arrA[0];

	cout << "ARR A:" << endl;
	Print(arrA, sizeA);


	const int sizeB = 5;
	int arrB[sizeB];

	Fill(arrB, sizeB, 1, 10);
	QuickSort(arrB, 0, sizeB - 1);

	const int* psizeB = &sizeB;
	int* parrB = &arrB[0];

	cout << "ARR B:" << endl;
	Print(arrB, sizeB);

	cout << "Enter option:\n[1] - Common elements of two arrays\n[2] - Elements of array A that are not included in B\n[3] - Elements of array B that are not included in A\n[4] - Elements of arrays A and B that are not common to them" << endl;
	cout << "___--- "; cin >> option;

	switch (option)
	{
	case 1: // Common elements of two arrays
		if (sizeA > sizeB)
		{
			const int sizeC = sizeA;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Common_values(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		else {
			const int sizeC = sizeB;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Common_values(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		break;
	case 2: // Elements of array A that are not included in B
		if (sizeA > sizeB)
		{
			const int sizeC = sizeA;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_A_B(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		else {
			const int sizeC = sizeB;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_A_B(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		break;
	case 3: // Elements of array B that are not included in A
		if (sizeA > sizeB)
		{
			const int sizeC = sizeA;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_B_A(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		else {
			const int sizeC = sizeB;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_B_A(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		break;
	case 4: // Elements of arrays A and B that are not common to them
		if (sizeA > sizeB)
		{
			const int sizeC = sizeA;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_A_B(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		else {
			const int sizeC = sizeB;
			int size = sizeC;
			int arrC[sizeC];
			const int* psizeC = &sizeC;
			int* parrC = &arrC[0];
			Different_A_B(parrC, psizeC, parrA, psizeA, parrB, psizeB);
			Print_results(arrC, sizeC);
		}
		break;
	default:
		break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main() {

	srand(time(NULL));
	int task_number;

	cout << "Enter task_number (1 - 3): "; cin >> task_number;

	switch (task_number)
	{
	case 1: cout << endl; task_1(); break;
	case 2: cout << endl; task_2(); break;
	case 3: cout << endl; task_3(); break;
	default: cout << "Wrong number!" << endl; break;
	}
}