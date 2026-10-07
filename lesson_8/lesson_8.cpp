#include <iostream>
using namespace std;
const float PI = 3.14;

void printHello();
void printSum(int, int =10);
int sum(int, int);
int sum(int, int, int);
double sum(double, double);
void swap(int, int);
void printArray(const int arr, int size);
void multiplyArrBy(int arr[], int size ,int k);

int main()
{
    cout << sum(13.5, 6.54) << '\n';


    //int number = 10;

    //printSum(10);
    //printSum(10,12);

    //printHello();

    //printSum(10, 45);//аргументи
    //printSum(45, 32);
    //cout << sum(10, 13) * sum(11, 45) << '\n';
    int var1 = 10, var2 = 12;
    cout << var1 << ' ' << var2 << '\n';
    swap(var1, var2);
    cout << var1 << ' ' << var2 << ' \n';



    const int SIZE = 5;
    int arr[5] = { 1,-5,34,12,3 };
    multiplyArrBy(arr, SIZE, 10);
    printArray(arr, SIZE);

}

void multiplyArrBy(int arr[], int size, int k) {
    for (int i = 0;i < size;++i) {
        arr[i] *= k;
    }
}



void swap(int var1, int var2) {
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

void printArray(const int arr[], int size) {
    cout << "{ ";
    for (int i = 0;i < size;++i) {
        if (i != size - 1) {
            cout << arr[i] << ',';
        }
        else {
            cout << arr[i];
        }
    }
    cout << " }";
}

int sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

double sum(double num1, double num2) {
    return num1 + num2;
}

void printHello() {
    cout << "hello,my dear user\n";
    cout << PI << '\n';
}

int sum(int num1, int num2) {
    return num1 + num2;
}

void printSum(int num1, int num2) {//параметри
    cout << num1 << '+' << num2 << '=' << num1 + num2 << '\n';

}
