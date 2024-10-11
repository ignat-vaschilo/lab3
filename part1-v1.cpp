#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    int arr[5];
    cout << "Исходный массив: ";
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    long result = -1;
    for (int i = 0; i < 5; i++) {
        if (arr[i]*arr[i] > result) {
            result = arr[i]*arr[i];
        }
    }
    cout << endl << "Максимальный квадрат числа = " << result;
    return 0;
}
