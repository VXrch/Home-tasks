#include <iostream>

using namespace std;

void task_1() {

    int counter = 0;

    for (int i = 100; i <= 999; ++i) {

        int digit1 = i % 10;
        int digit2 = (i / 10) % 10;
        int digit3 = (i / 100) % 10;

        if (digit1 == digit2 || digit2 == digit3 || digit1 == digit3) {
            counter++;
        }
    }

    cout << "Numbers with two identical numbers: " << counter << endl;
}

void task_2() {

    int counter = 0;

    for (int i = 100; i <= 999; ++i) {

        int digit1 = i % 10;
        int digit2 = (i / 10) % 10;
        int digit3 = (i / 100) % 10;

        if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3) {
            counter++;
        }
    }

    cout << "Numbers with all different numbers: " << counter << endl;
}

void task_3() {

    int number = 0;
    int result = 0;

    cout << "Enter an integer: "; cin >> number;

    while (number != 0) {

        int digit = number % 10;

        if (digit != 3 && digit != 6) {
            result = result * 10 + digit;
        }

        number /= 10;
    }

    cout << "Number after removing 3s and 6s: " << result << endl;
}

void task_4() {

    int numb_A = 0;

    cout << "Enter an integer A: "; cin >> numb_A;

    for (int numb_B = 2; numb_B <= numb_A; ++numb_B) {

        if (numb_A % (numb_B * numb_B) == 0 && numb_A % (numb_B * numb_B * numb_B) != 0) {
            cout << numb_B << " ";
        }
    }
}

void task_5() {

    int numb_A;
    int sum_of_numbers = 0;

    cout << "Enter an integer A: "; cin >> numb_A;
    int temp = numb_A;

    while (temp != 0) {
        sum_of_numbers += temp % 10;
        temp /= 10;
    }

    if (sum_of_numbers * sum_of_numbers == numb_A * numb_A) {
        cout << "Cube of sum of numbers is equal to A^2" << endl;
    }
    else {
        cout << "Cube of sum of numbers is not equal to A^2" << endl;
    }
}

void task_6() {

    int number;

    cout << "Enter an integer: "; cin >> number;
    cout << "Divisors of " << number << ": ";

    for (int i = 1; i <= number; ++i) {

        if (number % i == 0) {
            cout << i << " ";
        }
    }
}

void task_7() {

    int number_1 = 0;
    int number_2 = 0;

    cout << "Enter the first integer: "; cin >> number_1;
    cout << "Enter the second integer: "; cin >> number_2;

    cout << "Common divisors of " << number_1 << " and " << number_2 << " are: ";

    int minNum = min(number_1, number_2);

    for (int i = 1; i <= minNum; i++) {

        if (number_1 % i == 0 && number_2 % i == 0) {
            cout << i << " ";
        }
    }
}

void main() {

    int choice = 0;

    cout << "Enter task number (1-7): "; cin >> choice;

    switch (choice) {
    case 1:
        task_1();
        break;
    case 2:
        task_2();
        break;
    case 3:
        task_3();
        break;
    case 4:
        task_4();
        break;
    case 5:
        task_5();
        break;
    case 6:
        task_6();
        break;
    }
}