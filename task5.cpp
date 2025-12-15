#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Vvedit kilkist ryadkiv: ";
    cin >> rows;
    cout << "Vvedit kilkist stovpciv: ";
    cin >> cols;

    int num = 1;

    for (int r = 0; r < rows; r++) {
        vector<int> rowNums;

        for (int c = 0; c < cols; c++) {
            rowNums.push_back(num);
            num++;
        }

        if (r % 2 == 1) {
            for (int i = 0, j = (int)rowNums.size() - 1; i < j; i++, j--) {
                int tmp = rowNums[i];
                rowNums[i] = rowNums[j];
                rowNums[j] = tmp;
            }
        }

        for (int x : rowNums) {
            cout << setw(3) << x << " ";
        }
        cout << endl;
    }

    return 0;
}
