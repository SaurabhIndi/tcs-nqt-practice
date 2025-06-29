#include <bits/stdc++.h>
using namespace std;

void NonRepeatChar(string str){
    int n=str.length();
    int freq[200]={0};
    for(int i=0;i<n;i++){
        if(str[i]==' ') continue;
        else{
            freq[str[i]-'a']++;
        }
    }
    for (int i=0;i<n;i++){
        if(freq[str[i]-'a']==1 && str[i]!=' '){
            cout<<str[i]<<" ";
        }
    }
}

int main(){
    string str="take u forward";
    NonRepeatChar(str);
    cout<<endl;
    return 0;
}