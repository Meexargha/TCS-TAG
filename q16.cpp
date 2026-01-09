#include<bits/stdc++.h>
using namespace std;
 int main (){
    string s;
     cin >>s;

     s=s.substr(1,s.size()-2);

     vector<int>arr;
     stringstream ss(s);
     string temp;
     while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));

     }
     for(int i=0; i<arr.size()-1; i++){

    for(int j=0; j<arr.size()-i-1; j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
         }
        
    }
 }
 for(int i=0; i<arr.size(); i++){

    cout<<arr[i]<< " ";

 }
    return 0;
 }

 