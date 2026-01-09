#include<bits/stdc++.h>
using namespace std;
int  main (){
    string s;
     cin >>s;
      s=s.substr(1, s.size()-2);
      vector<int>arr;
      stringstream ss(s);
      string temp;
       while (getline(ss, temp, ',')){
        arr.push_back(stoi(temp));
       }
       int even =0; 
       int odd =0;
       int  n = arr.size();
       for(int i =0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }

       }
       cout<<even<< " "<< odd;
       return 0;

}