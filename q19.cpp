#include<bits/stdc++.h>
using namespace std;
int main (){
    string s1, s2;
     cin >>s1, s2;
      s1= s1.substr(1, s1.size()-2);
      s2= s2.substr(1, s2.size()-2);
      vector<int>a, b;
       string temp;
       stringstream ss1(s1);
       while(getline(ss1, temp, ';')){
        a.push_back(stoi(temp));
       }
        stringstream ss2(s2);
        while(getline(ss2, temp, ',')){
        b.push_back(stoi(temp));
        }

        vector<int>res;
        int i=0; 
        int j=0;

        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                res.push_back(a[i]);
                i++;
            }else{
                res.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            res.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            res.push_back(b[j]);
            j++;
        }   
        cout<<"[";
        for(int k=0; k<res.size(); k++){
            cout<<res[k];
            if(k!=res.size()-1){
                cout<<",";
            }
        }
        cout<<"]";
        return 0;
        

}