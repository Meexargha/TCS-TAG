#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;

    s=s.substr(1, s.size()-2);
    
    char ans = s[0];
    int maxCount =0;

    for(int i=0; i<s.size(); i++){
        int count=0;
        for(int j=0; j<s.size(); j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            ans=s[i];
        
        }
    }
    cout<<ans;
    return 0;

}