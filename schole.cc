#include <iostream>
using namespace std;
int main(){
    int StartHour, ArrivalHour, IsLate;
    cout << "Enter the start hour: ";
    cin >> StartHour ;
    cout << "Enter the arrival hour: ";
    cin >> ArrivalHour ;

    IsLate = (ArrivalHour - StartHour) > 0 ? 1 : 0;
    cout << "Is late: " << IsLate << endl;
    cin.get();
}