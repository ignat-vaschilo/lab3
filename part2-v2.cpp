#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    int n, m;
    cout << "Введите количество строк и столбцов: " ;
    cin >> n >> m;
    
    int** matrix = new int* [n];
    // **matrix - указатель на инт
    // *matrix - массив указателей
    // matrix - указатель на массив указателей
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    int* result = new int[m];
    for (int i = 0; i < n; i++) {
        long long p = 1;
        for (int j = 0; j < m; j++) {
            p *= matrix[i][j];
        }
        result[i] = p;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
}
