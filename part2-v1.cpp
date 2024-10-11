#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    int n, m;
    cout << "Введите количество строк и столбцов: " ;
    cin >> n >> m;
    
    vector<vector <int> > matrix(n, vector <int> (m, 0));
    cout << "Исходная матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<long long> result(n, 1);
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
