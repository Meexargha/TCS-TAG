#include<bits/stdc++.h>
using namespace std;
int main   (){
    string s;
    cin >>s;

    s=s.substr(1,s.size()-2);

    vector<int>arr;
    stringstream ss(s);
    string temp;

    while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));
    }
    int count=0;
    for(int i=0; i<arr.size(); i++){

        for(int j =i; j<arr.size(); j++){

            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count> arr.size()/2){
            cout<<arr[i];
            return 0;
        }
    }
    cout<<-1;
    return 0;

}