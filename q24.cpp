#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;

    int vowels =0; 
    int consonants=0;

    for(int i=0; i<s.length(); i++){
        char ch = tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
        
    }
     cout << vowels << " " << consonants;
    return 0;
}