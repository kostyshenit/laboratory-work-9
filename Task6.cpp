// Лабораторна робота №9 — Задача 6 (випадкові числа: srand, time, rand)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    const int n = 12;
    int a[n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 7 - 2; // [-2..4]
        cout << a[i] << " ";
    }
    cout << endl;

    int zeroIdx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            zeroIdx = i;
            break;
        }
    }

    if (zeroIdx != -1) {
        cout << "First zero element index: " << zeroIdx
             << " (position " << (zeroIdx + 1) << ")" << endl;
    } else {
        cout << "Array does not contain zero elements." << endl;
    }

    return 0;
}
