#include <iostream>
#include <windows.h>
using namespace std;

// Рекурсивна функція для обчислення
static int Ackermann(int m, int n) {
        if (m == 0) {
            return n + 1; // A(0, n) = n + 1
        }
        else if (m > 0 && n == 0) {
            return Ackermann(m - 1, 1); // A(m, 0) = A(m - 1, 1)
        }
        else {
            return Ackermann(m - 1, Ackermann(m, n - 1)); // A(m, n) = A(m - 1, A(m, n - 1))
        }
    }
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n;

    // Введення значень
    cout << "Введіть ціле число m: ";
    cin >> m;
    cout << "Введіть ціле число n: ";
    cin >> n;

    // Виклик функції Акермана
    int result = Ackermann(m, n);

    // Виведення результату
    cout << "A(" << m << ", " << n << ") = " << result << endl;

    return 0;
}