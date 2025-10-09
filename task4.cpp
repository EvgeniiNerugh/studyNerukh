#include <iostream>
#include <string> 
using namespace std;

int main() {
    int number = 12345;
    string str = to_string(number);

    cout << "Numeric: " << number << endl;
    cout << "line: " << str << endl;
    return 0;
}
