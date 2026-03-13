#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n>>q;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
     int threshold = arr[q-1];
    int count = 0 ; 
    for(int i = 0 ;i<n;i++){
        if(arr[i] >=threshold &&  arr[i]>0){
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}