#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;
     s=s.substr(1,s.size()-2);
     vector<int>arr;
      stringstream ss(s);

      string temp;
      while(getline(ss, temp,',' )){
        arr.push_back(stoi(temp));
      }

      int n = arr.size();

      for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }

      }
      for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<< " ";
        }
      }
    return 0;

}