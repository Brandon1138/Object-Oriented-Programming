#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int** array = new int*[n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[i + 1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            array[i][j] = j + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}