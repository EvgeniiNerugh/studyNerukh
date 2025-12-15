#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Vvedit neparne chislo (rozmir romba): ";
    cin >> n;

    int middle = n / 2;

    for (int i = 0; i < n; i++) {
        int dist = abs(middle - i);
        int stars = n - 2 * dist;
        int spaces = dist;

        for (int s = 0; s < spaces; s++) cout << " ";
        for (int k = 0; k < stars; k++) cout << "* ";

        cout << endl;
    }

    return 0;
}
