#include<bits/stdc++.h>
using namespace std;

int Secondsmall(int arr[], int n){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int SecondLarg(int arr[], int n){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main (){
    int arr1[]={2,3,5,7,8};
    int n =5;

    int max = SecondLarg(arr1,n);
    int min = Secondsmall(arr1,n);

    cout << max << endl;
    cout << min;

    return 0;
}
