#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    int k;
     cin >>k;

     int sum=0;
     int maxSum=INT_MIN;
     
     int left =0;
     for(int right=0; right<n; right++){
        sum +=arr[right];

        if(right-left+1==k){
            maxSum = max(maxSum, sum);
            sum -=arr[left];
            left++;

        }
     }
     cout<<maxSum;
     return 0;

}