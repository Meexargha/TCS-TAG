#include<bits/stdc++.h>
using namespace std;
int main (){
     string s;
     cin >>s;
     s= s.substr(1, s.size()-2);

     vector<int>arr;
     stringstream ss(s);
     string temp;
     while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));
     }
     
     int k;
     cin>>k;

     sort(arr.begin(), arr.end());

     cout<<arr[k-1];
     return 0;



}