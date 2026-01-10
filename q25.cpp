#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin>>s;
    s=s.substr(1, s.size()-2);
   
    unordered_map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;

    }

    for(int i=0; i<s.size(); i++){
        if(mp[s[i]]==1){
            cout<<s[i];
            return 0;
        }
    }
    cout<<-1;
    return 0;

}