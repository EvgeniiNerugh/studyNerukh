#include <iostream>
#include <string>
using namespace std;

bool isIceCreamSandwich(const string& s) {
    if (s.length() < 3) return false;

    char edge = s[0];

    int i = 0;
    while (i < (int)s.length() && s[i] == edge) i++;
    if (i == (int)s.length()) return false; 

    int j = (int)s.length() - 1;
    while (j >= 0 && s[j] == edge) j--;

    int leftLen = i;
    int rightLen = (int)s.length() - (j + 1);

    if (leftLen != rightLen) return false;

    string middle = s.substr(i, (j - i + 1));
    if (middle.empty()) return false;

    char midChar = middle[0];
    if (midChar == edge) return false;

    for (char ch : middle) {
        if (ch != midChar) return false;
    }

    return true;
}

int main() {
    string s;
    cout << "Vvedit ryadok: ";
    getline(cin, s);

    if (isIceCreamSandwich(s)) {
        cout << "Ce sendvich iz morozyvom." << endl;
    } else {
        cout << "Ce NE sendvich iz morozyvom." << endl;
    }

    return 0;
}
