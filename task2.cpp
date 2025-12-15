#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Vvedit ryadok: ";
    getline(cin, s);

    cout << "Dovzhyna ryadka: " << s.length() << endl;
    return 0;
}
