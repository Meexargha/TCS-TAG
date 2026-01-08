#include<bits/stdc++.h>
using namespace std;
 int main (){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];


    }
    bool found = false;
    int k;
    cin >>k;
    //vector<pair<int, int>>ans;

    for(int i=0; i<n; i++){
        for(int j=i+1;j<n; j++){
            if(arr[i]+arr[j]==k){
               cout<<"yes";
               return 0;
            }
        }
    }
    cout<<"no";
    return 0;
}
    