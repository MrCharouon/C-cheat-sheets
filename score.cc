#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter Mark: ";
    cin >> x;
    if (x >= 17){
        cout << "A" << endl;
    }else if (x >= 14){
        cout << "B" << endl;
    }else if (x >= 12){
        cout << "C" << endl;
    }else if (x >= 10){
        cout << "D" << endl;
    }else if (x >= 0){
        cout << "F" << endl;
    }
    cin.get();
}