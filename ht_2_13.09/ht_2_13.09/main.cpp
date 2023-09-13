#include <iostream>

using namespace std;

void task_1(){

    int n = 0;

    cout << "Enter number n: "; cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << i;
        }
    }
}

void task_2(){

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (i == j) {
                cout << "0 ";
            }
            else {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}

void task_3(){

    int sum = 0;

    for (int i = 10; i >= 1; i--) {

        for (int j = 0; j < i; j++) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl << "Sum: " << sum << endl;
}

void task_4(){

    for (int i = 1; i <= 15; i++) {

        if (i % 2 == 0) {
            for (int j = 1; j <= 8; j++) {
                cout << i << " ";
            }
        }
        else {
            for (int j = 1; j <= 10; j++) {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}

void task_5(){

    for (int i = 1; i <= 30; i++) {

        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        else {
            for (int j = 1; j <= 5; j++) {
                cout << "1 ";
            }
        }
        cout << endl;
    }

}

void task_6(){

    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
}

void task_7(){

    int a = 0;
    int b = 0;
    int count = 0;

    cout << "Enter number a and b: "; cin >> a >> b;

    for (int i = a; i <= b; ++i) {

        if (i % 12 == 0) {
            count++;
        }
    }

    cout << "Number of numbers divisible by 12: " << count << endl;
}

void task_8(){
    
    const int numMonths = 12;
    int profit[numMonths];
    int startMonth = 0;
    int endMonth = 0;


    for (int i = 0; i < numMonths; i++) {
        cout << "Enter the profit for " << i + 1 << "-th month: "; cin >> profit[i];
    }

    cout << "Enter first month range: "; cin >> startMonth;
    cout << "Enter second month range: "; cin >> endMonth;

    if (startMonth < 1 || endMonth > numMonths || startMonth > endMonth) {
        cout << "Incorrect range!" << endl; return;
    }

    int maxProfit = profit[startMonth - 1];
    int minProfit = profit[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    for (int i = startMonth - 1; i < endMonth; i++) {
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i + 1;
        }
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i + 1;
        }
    }

    cout << "Maximum profit: " << maxProfit << " in " << maxMonth << "-th month" << endl;
    cout << "Minimum profit: " << minProfit << "in " << minMonth << "-th month" << endl;
}


void main() {

    int choice = 0;

    cout << "Enter task number (1-8): "; cin >> choice;

    switch (choice) {
    case 1: task_1(); break;
    case 2: task_2(); break;
    case 3: task_3(); break;
    case 4: task_4(); break;
    case 5: task_5(); break;
    case 6: task_6(); break;
    case 7: task_7(); break;
    case 8: task_8(); break;
    default: cout << "Wrong choice!" << endl; break;
    }
}