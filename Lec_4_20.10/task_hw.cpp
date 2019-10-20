#include <iostream>
#include <string>

using namespace std;

int main(){
    string message, another_message;
    cout<<"Enter your message: "<<endl;
    cin >> message;

    cout << message.length() <<" "<<message.size() <<endl;
    cout<<"Enter another message"<<endl;
    cin >>another_message;
    cout << another_message.length() <<" "<<another_message.size() <<endl;

    int symbols = static_cast<int>(message.length());
    cout << symbols <<endl;


    return 0;
}