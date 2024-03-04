#include<iostream>
#include<string>
using namespace std;

// Indexing of characters in a string
// Similar to arrays

// COLLEGE0 
// 01234567

// (LAST IS NULL CHARACTER WHICH TELLS THAT OUR STRING ENDS HERE)
int main(){
    string str = "college";
    cout<<str[3]<<endl;

    // ASCII VALUES
    // A-65, Z-90
    // a-97, z-122

    char ch = 'a';
    cout<<"ASCII value of 'a' is: "<<int(ch)<<endl;

    // Difference b/w string and character array

    // string is a class , string variables are object of this class, defined as => string str_name; 

    // array of char data type, defined as => char array_name[size]

    // dynamic memory allocation in strings

    // static memory allocation in char array

    // no pre-allocated memory in string

    // pre-allocated memory in char array

    // have inbuilt functions in strings

    // faster are char arrays
    
    return 0;
}