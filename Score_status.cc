#include <iostream>
using namespace std;
int main(){
    float x;
    cout << "Enter Your Mark: ";
    cin >> x;
    if (x >=10){
        cout << "Your Passed"<< endl;
    }else{
        cout << "Your Failed"<< endl;
    }
}