#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    int n;
    cin >> n;
    int *p_arr = new int [n];
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        p_arr[i] = rand() % 100;
        cout << p_arr[i] << " ";
    }

    long result = -1;
    for (int i = 0; i < n; i++) {
        if (p_arr[i]*p_arr[i] > result) {
            result = p_arr[i]*p_arr[i];
        }
    }
    delete [] p_arr;
    cout << endl << "Максимальный квадрат числа = " << result;
    return 0;
}
