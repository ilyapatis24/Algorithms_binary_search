#include <iostream>

using namespace std;

int countGreater(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    int leftGreater = size;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] > key) {
            leftGreater = middle;
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return (size - leftGreater);
}

int main(int argc, char** arcv) { 
    system("chcp 1251");
    int array[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int size = sizeof(array) / sizeof(array[0]);
    int start_point = 0;
    cout << "Введите точку отсчёта: ";
    cin >> start_point;
    cout << "Количество элементов в массиве больших, чем " << start_point << ": " << countGreater(array, size, start_point);
    return 0;
}