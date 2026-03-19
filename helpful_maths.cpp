#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str ;
    cin >> str;
    sort(str.begin(),str.end());

   for(int i = 0 ; i<str.length();i++){
    if(str[i] != 1){
        str[i].erase();
    }else{
        break;
    }
   } 
      cout<< str<<endl;
    return 0;
}