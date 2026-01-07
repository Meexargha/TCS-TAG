/* Find the Second Largest Element in an Array

You are given an array of integers.
Your task is to find and print the second largest distinct element present in the array. */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];

    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondLargest= largest;
            largest = arr[i];
        }
        else if(largest > arr[i] && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;
    return 0;

}