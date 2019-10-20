#include <iostream>

using namespace std;

int main(){
char str[256];

  string s;
  getline(cin,s);
  int sum = s.length()*23;
  cout << sum/100 <<" р. " << sum%100<<" коп."<<endl;

    return 0;
}
