#include <iostream>
#include <string> 
using namespace std;

int main() {
    int number = 12345;
    string str = to_string(number);

    cout << "Число: " << number << endl;
    cout << "Як рядок: " << str << endl;
    return 0;
}
