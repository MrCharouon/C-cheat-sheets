#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    if(x < 0){
        x = -x;
    } 
    cout << "\n\t The absolute value is " << x << endl;
    cin.get();
    
}