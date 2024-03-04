#include<iostream>
#include<string>
using namespace std;

// objects of class std: string in C++
int main(){
    // initializing the string
    string str = "college";
    string str1("wallah");
    cout<<str<<" "<<str1<<endl;

    // taking input from user
    string str2;
    cin>>str2;      // extraction operator takes input untill it gets a space or tab or next line
    cout<<"Output from cin: "<<str2<<endl;

    string str3;
    getline(cin, str3);
    cout<<"Output from getline: "<<str3<<endl;
    return 0;
}