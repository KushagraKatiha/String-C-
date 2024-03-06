#include<iostream>
#include<string>
#include<vector>
using namespace std;

string checkIsomorphic(string s, string t){
    if(s.size() != t.size()) return "Non-isomorphic";

    vector<int> arr1(128, -1);
    vector<int> arr2(128, -1);

    for(int i = 0; i < s.size(); i++){
        if(arr1[s[i]] == arr2[t[i]]){
            arr1[s[i]] = i;
            arr2[t[i]] = i;
        }else{
            return "Non-isomorphic";
        }
    }
    return "Isomorphic";
}

// Given two strings s and t, determine if they are isomorphic.   (one to one mapping)
int main(){
     string s; 
     string t;

     cout<<"Enter s string: "; cin>>s;
     cout<<"Enter t string: "; cin>>t;

     cout<<checkIsomorphic(s, t)<<endl;
    return 0;
}