#include<bits/stdc++.h>
using namespace std;
int main (){
    //taking input of number of elements
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i =0; i<n; i++){
        cin >> arr[i];
         
    }
    int smallest = arr[0];
    int maximum = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]< smallest){
            smallest = arr[i];

        }
         if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout << smallest<< " " << maximum << endl;
    return 0;
}