#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;

    s=s.substr(1, s.size()-2);

    vector<int>arr;
    stringstream ss(s);
    string temp;

    while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));
    }
    int target;
    cin >>target;

    int left=0;
    int sum =0;
    
    for(int right=0; right<arr.size(); right++){
        sum +=arr[right];

        while(sum>target && left<=right){
            sum -=arr[left];
            left++;
        }
        if(sum==target){
            for(int i =left; i<=right; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
            
        }
    }
    cout<< -1;
    return 0;
}