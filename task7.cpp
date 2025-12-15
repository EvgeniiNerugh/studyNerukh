#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, angleDeg;
    cout << "Vvedit shvydkist v (m/s): ";
    cin >> v;
    cout << "Vvedit kut (gradusy): ";
    cin >> angleDeg;

    const double g = 9.81;
    const double PI = 3.14159265358979323846;

    double angleRad = angleDeg * PI / 180.0;
    double distance = (v * v * sin(2 * angleRad)) / g;

    cout << "Vidstan (pryбlyzno): " << distance << " metriv" << endl;
    return 0;
}
