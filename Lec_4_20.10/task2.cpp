#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int current_min = 99999;
    int current_max = -99999;
    int num;
    while (i < 5){
        cout<<"Enter number:";
        cin >> num; 
        if (num < current_min){
            current_min = num;
            cout<<"Current new min is "<<current_min<<endl;
        }

        if (num > current_max){
            current_max = num;
            cout<<"Current new max is "<<current_max<<endl;
        }
        i++;
    }



    return 0;
}