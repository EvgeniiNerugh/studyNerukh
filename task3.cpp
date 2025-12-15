#include <iostream>
using namespace std;

int main() {
    int width, height;
    cout << "Vvedit shyrynu: ";
    cin >> width;
    cout << "Vvedit vysotu: ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
