#include <iostream>

using namespace std;

int main(){
    float A, B;
    cin >> A >> B;
    string operand;
    cin >> operand;
    if (operand=="+") {
        cout << A+B;
    } else if (operand=="-") {
        cout << A-B;
    } else if (operand=="*") {
        cout << A*B;
    } else if ((operand=="/")&&(B!=0)){
        cout <<A/B;
    } else {
        cout << "ЫЫЫЫЫЫ";
    }
    cout << endl;
    return 0;
}
