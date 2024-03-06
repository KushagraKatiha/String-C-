#include<iostream>
#include<string>
#include<vector>
using namespace std;

string sortString(string str){
    vector<int> freq(26, 0);

    // storing the frequency of every character in string
    for(int i = 0; i < str.size(); i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    // create our sorted string
    int j = 0; 
    for(int i = 0; i < 26; i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;
}

// Given a string str, sort the given string
int main(){
    string str; 
    cin>>str;

    cout<<sortString(str)<<endl;
    return 0;
}