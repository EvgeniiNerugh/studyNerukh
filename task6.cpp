#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Vvedit a: ";
    cin >> a;
    cout << "Vvedit b: ";
    cin >> b;
    cout << "Vvedit c: ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "Rozv'yazkiv nema (a=0 i b=0)." << endl;
        } else {
            double x = -c / b;
            cout << "Ce liniyne rivnyannya. x = " << x << endl;
        }
        return 0;
    }

    double D = b * b - 4 * a * c;
    cout << "Dyskryminant D = " << D << endl;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Dva koreni:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (D == 0) {
        double x = (-b) / (2 * a);
        cout << "Odyn korin: x = " << x << endl;
    } else {
        cout << "Diysnyh koreniv nema." << endl;
    }

    return 0;
}
