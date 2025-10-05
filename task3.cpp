#include <iostream>
#include <cstring> // бібліотека для strlen
using namespace std;

int main() {
    const char *text = "Hello, world!";
    cout << "Рядок: " << text << endl;
    cout << "Довжина рядка: " << strlen(text) << endl;
    return 0;
}
