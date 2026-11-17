// Лабораторна робота №9 — Задача 4 (випадкові числа: srand, time, rand)
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
    int arr[n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 41 - 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    int A;
    cout << "Enter A: ";
    if (!(cin >> A)) {
        A = 10;
        cout << A << endl;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > A) count++;
    }

    cout << "Elements greater than " << A << ": " << count << endl;
    return 0;
}
