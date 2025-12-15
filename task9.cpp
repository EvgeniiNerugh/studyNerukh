#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Vvedit sumu pokupky (grn): ";
    cin >> amount;

    double discount = 0.0;

    if (amount > 1000) discount = 0.05;
    else if (amount > 500) discount = 0.03;

    double discountValue = amount * discount;
    double finalPrice = amount - discountValue;

    cout << "Suma: " << amount << " grn" << endl;
    cout << "Znyzhka: " << discount * 100 << "%" << endl;
    cout << "Rozmir znyzhky: " << discountValue << " grn" << endl;
    cout << "Do oplaty: " << finalPrice << " grn" << endl;

    return 0;
}
