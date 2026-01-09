// longest subarray [1,2,3,1,2,3,4]
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
    unordered_map<int, int>seen;

    int left=0;
    int maxLen =0;

    for(int right=0; right<arr.size(); right++){
        seen[arr[right]]++;

        while(seen[arr[right]]>1){
            seen[arr[left]]--;
            left++;
        }
        maxLen = max(maxLen, right-left+1);
    }
    cout<<maxLen;
    return 0;
}