// bracket input 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;

    // remove bracket 

    s=s.substr(1, s.size()-2);

    vector<int>arr;
    stringstream ss(s);
    string temp;

    while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));

    }
    int target;
    cin >>target;

    int left =0;
    int sum =0;
    int minLen =INT_MAX;

    for(int right=0; right< arr.size(); right++){
        sum +=arr[right];

        while(sum>=target){
            minLen = min(minLen, right-left+1);
            sum -=arr[left];
            left++;
        }

    }
    if(minLen ==INT_MAX){
        cout<<0;
    }else{
        cout<<minLen;
        

    }
    return 0;
    
}