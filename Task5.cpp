// Лабораторна робота №9 — Задача 5 (випадкові числа: srand, time, rand)
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

    for (int i = 0; i < n; ) {
        int val = rand() % 100;
        bool unique = true;
        for (int j = 0; j < i; j++) {
            if (a[j] == val) { unique = false; break; }
        }
        if (unique) a[i++] = val;
    }

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int first = (a[0] > a[1]) ? a[0] : a[1];
    int second = (a[0] > a[1]) ? a[1] : a[0];

    for (int i = 2; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second) {
            second = a[i];
        }
    }

    cout << "Max element: " << first << endl;
    cout << "Second largest element: " << second << endl;
    return 0;
}
