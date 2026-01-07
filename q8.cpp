#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;

    vector<int>arr(n-1);
    for(int i=0; i<n-1; i++){
        cin >>arr[i];
        
    }
    int xorAll =0;
    int xorArr =0;

    for(int i=0; i<n; i++){
        xorAll ^=i;
    }
    for(int i=0; i<n-1; i++){
        xorArr ^=arr[i];
    }
    cout << (xorAll^xorArr) << endl;
    return 0;

}