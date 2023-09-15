#include <iostream>

using namespace std;

void task_1(){
    // Функція для виводу прямокутника з висотою N і шириною K

    int N = 0; int K = 0;

    cout << "Enter N (height): "; cin >> N;
    cout << "Enter K (width): "; cin >> K;

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < K; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void task_2(){

    int num;

    cout << "Enter number: "; cin >> num;

    if (num < 0) {
        cout << "Wrong number!" << endl;
    }
    else {

        int result = 1;

        for (int i = 2; i <= num; i++) {
            result *= i;
        }
        cout << "Factorial " << num << " = " << result << endl;
    }
}

void task_3(){
    // Функція для перевірки, чи є число простим

    int num = 0;

    cout << "Enter number: "; cin >> num;

    if (num <= 1) {
        cout << "True!" << endl;;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout << "False!" << endl;
        }
    }
}

void task_4() {

    int min = 20;
    int min_i = -1;
    int min_j = -1;

    int max = -10;
    int max_i = -1;
    int max_j = -1;

    const int col = 10;
    const int row = 10;

    int arr[col][row];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = 10 + rand() % 90;
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "[" << arr[i][j] << "] ";
        }
        cout << endl;
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
            else if (arr[i][j] < min) {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    cout << "Min value = " << min << ", col = " << min_i << ", row = " << min_j << endl;
    cout << "Max value = " << max << ", col = " << max_i << ", row = " << max_j << endl;
}

void main() {

    int task_number = 0;

    cout << "Enter task number (1-4): "; cin >> task_number;

    switch (task_number)
    {
    case 1: task_1(); break;
    case 2: task_2(); break;
    case 3: task_3(); break;
    case 4: task_4(); break;
    default: cout << "Wrong number!" << endl;
    }
}