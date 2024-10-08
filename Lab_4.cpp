/****************************
 *  Автор:      Вялов Г.В.  *
 *  Дата:       08.10.2024  *
 *  Название:   Лаба №4     *
 ***************************/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    const int rows = 3;
    const int cols = 3;

    vector<vector<int>> matrix = {
        {3, 5, 4},
        {4, 2, 6},
        {2, 1, 3}
    };

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> positiveSums(cols, 0);
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][j] > 0) {
                positiveSums[j] += matrix[i][j];
            }
        }
    }

    cout << "Суммы положительных элементов каждого столбца:" << endl;
    for (int j = 0; j < cols; ++j) {
        cout << positiveSums[j] << " ";
    }
    cout << endl;

    return 0;
}