#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int, int>freq;
    vector<int>duplicate;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;

    }
    for(auto It:freq){
        if(It.second>1){
            duplicate.push_back(It.first);
        }
    }
    if(duplicate.size()==0){
        cout<< -1 <<endl;
    }else{
        for(int x:duplicate){
            cout<<x<<" ";
        }
    
    }

    return 0;
}