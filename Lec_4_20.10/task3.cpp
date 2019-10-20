#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> h_vec;
    int h;
    int min_h = 150;
    int max_h = 190;

    cout<<"Enter H of candidate: ";
    cin >> h;
    while (h >= 0){
        if (h >= min_h && h <= max_h){
            h_vec.push_back(h);
        }
        cout<<"Enter H of candidate: ";
        cin >> h;
    }
    cout << "Total amount of valid candidates : "<< h_vec.size() <<endl;

    cout<<"Metrics: Max H is : " << h_vec[distance(h_vec.begin(), max_element(h_vec.begin(), h_vec.end()))];
    cout<<"    "<<"Min H is: "<< h_vec[distance(h_vec.begin(), min_element(h_vec.begin(), h_vec.end()))]<<endl;


    return 0;
}