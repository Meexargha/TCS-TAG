#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int>mp;
     vector<int> order;

     for(int i=0; i<n; i++){
        if(mp[arr[i]]==0){
            order.push_back(arr[i]);
        }
        mp[arr[i]]++;
     }
     for(int x: order){
        cout << x << " " << mp[x] << endl;
     }
     return 0;  
}