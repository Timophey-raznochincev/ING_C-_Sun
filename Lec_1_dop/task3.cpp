#include <iostream>

using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int metric = (a+b)/(a-b); 
    cout << "Total metric value " << metric << endl;

    return 0;
}