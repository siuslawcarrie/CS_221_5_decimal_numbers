#include <iostream>
#include<iomanip>

using namespace std;
const int LWIDTH = 20;
const int RWIDTH = 10;

int main() {
    float num1, num2, num3, num4, num5, sum;
    cout << "Please enter 5 decimal numbers separated by spaces: ";
    cout << fixed << setprecision(2);
    num1 = 1.5;
    num2 = 2.3;
    num3 = 4.01;
    num4 = 5.445666;
    num5 = 1.1111;
    //cin >> num1 >> num2 >> num3 >> num4 >> num5;
    sum = num1 + num2 + num3 + num4 + num5;
    cout << left << "You entered: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << endl;
    cout << left << setw(LWIDTH) << setfill(' ') << "The sum of your numbers = " << setw(RWIDTH) << setfill(' ')
         << right<< sum << endl;
    cout << left << setw(LWIDTH) << setfill(' ') << "The product of your numbers = " << setw(RWIDTH) << setfill(' ')
         << right<< num1 * num2 * num3 * num4 * num5 << endl;
    cout << left << setw(LWIDTH) << setfill(' ') << "The average of your numbers = " << setw(RWIDTH) << setfill(' ')
         << right<<sum / 5 << endl;
    return 0;
}
