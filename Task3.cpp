// Лабораторна робота №9 — Задача 3 (випадкові числа: srand, time, rand)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    const int n = 10;
    int a[n];

    // Генеруємо масив різних випадкових чисел
    for (int i = 0; i < n; ) {
        int val = rand() % 100 - 30;
        bool unique = true;
        for (int j = 0; j < i; j++) {
            if (a[j] == val) { unique = false; break; }
        }
        if (unique) a[i++] = val;
    }

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Original: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIdx]) minIdx = i;
        if (a[i] > a[maxIdx]) maxIdx = i;
    }

    int tmp = a[minIdx];
    a[minIdx] = a[maxIdx];
    a[maxIdx] = tmp;

    cout << "Swapped min (" << a[maxIdx] << ") and max (" << a[minIdx] << "):" << endl;
    cout << "Result:   ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
