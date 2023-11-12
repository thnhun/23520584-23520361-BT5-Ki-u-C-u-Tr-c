#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

int main() {
    int n;
    cout << "Nhap so luong duong tron: ";
    cin >> n;

    double* centerX = new double[n];
    double* centerY = new double[n];
    double* radius = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do tam va ban kinh cua duong tron thu " << i + 1 << ":" << endl;
        cout << "Toa do tam (x, y): ";
        cin >> centerX[i] >> centerY[i];
        cout << "Ban kinh: ";
        cin >> radius[i];
    }

    double overlapArea = calculateOverlapArea(n, centerX, centerY, radius);

    cout << "Dien tich phan mat phang bi phu boi " << n << " duong tron la: " << overlapArea << endl;

    delete[] centerX;
    delete[] centerY;
    delete[] radius;

    return 0;
}




double calculateOverlapArea(int n, double* centerX, double* centerY, double* radius)
{
    double totalArea = 0.0;

    for (int i = 0; i < n; i++) {
        double currentArea = PI * pow(radius[i], 2); 

        for (int j = 0; j < n; j++) {
            if (j != i) {
                double distance = sqrt(pow(centerX[i] - centerX[j], 2) + pow(centerY[i] - centerY[j], 2));

                if (distance < radius[i] + radius[j]) {
                    double angle1 = 2 * acos((pow(radius[i], 2) + pow(distance, 2) - pow(radius[j], 2)) / (2 * radius[i] * distance));
                    double angle2 = 2 * acos((pow(radius[j], 2) + pow(distance, 2) - pow(radius[i], 2)) / (2 * radius[j] * distance));
                    double overlapArea = (0.5 * pow(radius[i], 2) * (angle1 - sin(angle1))) + (0.5 * pow(radius[j], 2) * (angle2 - sin(angle2)));

                    currentArea -= overlapArea;
                }
            }
        }

        totalArea += currentArea;
    }

    return totalArea;
}

