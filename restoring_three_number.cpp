#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int n = 4 ; 
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin >>  arr[i];
    }
    
    int max = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i  = n-1 ; i>=0;i--){
        if(max - arr[i] != 0){
            ans.push_back(max - arr[i]);
        }
    }

    for(int i = 0 ;i<ans.size(); i++){
        cout << ans[i]<<" ";
    }
    cout<<endl;
    



    return 0 ;
}