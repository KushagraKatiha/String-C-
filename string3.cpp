#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

// funcitons in a string
int main(){
    // reverse(strt_ptr, end_ptr)
    string str = "abcd";
    reverse(str.begin(), str.end());

    cout<<str<<endl;

    // substr(position, length)
    cout<<str.substr(0, 3)<<endl;

    // + (concatinate)
    string str1 = "hello";
    string str2 = "world";

    str1 += str2;
    cout<<str1<<endl;

    str1 = str1 + str2;
    cout<<str1<<endl;

    // strcat() => used to conctinate character arrays

    char s1[20] = "college";
    char s2[20] = "wallah";

    strcat(s1, s2);
    cout<<s1<<endl;

    // push_back() => insert char at the end of char array

    string newString = "abcd";
    char c = 'k';
    newString.push_back(c);
    cout<<newString<<endl;

    // size() => tells the size of the array
    // length() => tells the length of the array

    char newChArr[20] = "abcdefghijkl";
    cout<<strlen(newChArr)<<endl;

    string newStr = "abcdefghijklmnop";
    cout<<newStr.size()<<endl;

    // to_string() => to convert numeric value to string

    int num = 8;
    string numToStr = to_string(num);

    cout<<typeid(numToStr).name()<<endl;
    return 0;
}