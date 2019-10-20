#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (((a+2 == c)||(a-2 == c))&&((b+5 == d)||(b-5 == d))){
        cout << "YESSSS!";
    } else if (((a+5 == c)||(a-5 == c))&&((b+2 == d)||(b-2 == d))){
        cout << "YESSSS!";
    } else {
        cout << "No no";
    }
    cout << endl;
    return 0;
}
