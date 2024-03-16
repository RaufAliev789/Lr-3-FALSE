#include <iostream>

int *FooNech(int arr[], const int SIZE) {
    int* result = new int[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0)
            result[i] = arr[i];
        else if (arr[i] % 2 == 0) {
            for (int j = 0; j < SIZE; j++) {
                if ((arr[j] % 2 != 0) && (arr[i] + arr[j]) %2 !=0) 
                    result[i] = arr[i]+ arr[j];
            }
        }
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    int SIZE;
    std::cout << "Введите размер массива: " << std::endl;
    std::cin >> SIZE;

    int* arr = new int[SIZE];

    std::cout << "Введите " << SIZE << " элементов(a): " << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }

    int* result = FooNech(arr, SIZE);

    std::cout << "Выходной массив: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << result[i] << " ";
    }

    delete[] arr;
    delete[] result;

    return 0;
}