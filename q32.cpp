#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    int sum=0;
    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >>mat[i][j];

            if(i==j){
                sum +=mat[i][j];
                
            }

        }

    }
    cout<<sum<<endl;
    return 0;



}