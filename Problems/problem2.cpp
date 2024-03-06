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

// Optimized way 
string checkAnagram(string s, string t){

    if(s.size() != t.size()) return "Not an anagram";

    vector<int> freq(26, 0);

    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            return "Not an anagram";
        }
    }
    
    return "Both are anagram";
    
}

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
int main(){

    string s;
    cout<<"Input string s: "; cin>>s;
    string t; 
    cout<<"Input string t: "; cin>>t;

    // if(sortString(s) == sortString(t)){
    //     cout<<"Both are anagram of each other"<<endl;
    // }else{
    //     cout<<"Not an anagram"<<endl;
    // }
     
    cout<<checkAnagram(s, t)<<endl;

    return 0;
}