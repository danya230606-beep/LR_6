#include <iostream>
using namespace std;

int sumOdd(int n) {
    int sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += 2 * k - 1;
    }
    return sum;
}

void showResult(int sum, int n) {
    if (sum == n * n) {
        cout << "Сума дорівнює квадрату числа " << n << "." << endl;
    } else {
        cout << "Сума не дорівнює квадрату числа " << n << "." << endl;
    }
}

int main() {
    int n;
    cout << "Введіть кількість непарних натуральних чисел n: ";
    cin >> n;

    if (n <= 0 || n > 46340) {
        cout << "n має бути від 1 до 46340." << endl;
        return 1;
    }

    int sum = sumOdd(n);
    int square = n * n;

    cout << "Сума перших " << n << " непарних чисел = " << sum << endl;
    cout << "Квадрат числа " << n << " = " << square << endl;

    showResult(sum, n);

    return 0;
}