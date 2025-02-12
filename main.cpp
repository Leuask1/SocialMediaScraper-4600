Ось базовий приклад обробки даних в C++, який складається з трьох частин: створення даних, сортування даних і пошуку даних. 

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

// Функція для генерації даних
std::vector<int> generateData(int size) {
    std::vector<int> data;
    srand((unsigned) time(0));

    for (int i = 0; i < size; i++) {
        data.push_back((rand() % 100) + 1);
    }

    return data;
}

// Функція для сортування даних
void sortData(std::vector<int>& data) {
    std::sort(data.begin(), data.end());
}

// Функція для пошуку даних
bool searchData(const std::vector<int>& data, int value) {
    return std::binary_search(data.begin(), data.end(), value);
}

// Функція для виводу даних
void printData(const std::vector<int>& data) {
    for (int i : data) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    // Створення даних
    std::vector<int> data = generateData(50);

    // Перед сортуванням
    std::cout << "Before sorting: " << std::endl;
    printData(data);

    // Сортування даних
    sortData(data);

    // Після сортування
    std::cout << "After sorting: " << std::endl;
    printData(data);

    // Пошук даних
    int value = 25;
    if (searchData(data, value))
        std::cout << "Value " << value << " found." << std::endl;
    else
        std::cout << "Value " << value << " not found." << std::endl;

    return 0;
}
```

Цей код генерує 50 випадкових чисел від 1 до 100, сортує їх і потім виконує бінарний пошук. Всі ці частини виконуються в головній функції `main()`. Важливо зазначити, що для роботи з великими наборами даних ви, можливо, захочете використовувати ефективніші алгоритми або структури даних.