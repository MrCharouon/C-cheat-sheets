#include <iostream>
using namespace std;
int main()
{
    int max, x, y;
    cout << "Enter one integers: ";
    cin >> x;
    cout << "Enter two integers: ";
    cin >> y;
    if (x > y){
        max = x;
    } else {
        max = y;
    }
    cout << "\nThe maximum value is " << max << endl;
    cin.get();
}