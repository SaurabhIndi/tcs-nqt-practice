#include<bits/stdc++.h>
using namespace std;

void FreqChar(string str){
    int n=str.length();
    int freq[26]={0};
    for(int i=0;i<n;i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            cout<<(char)(i+'a')<<freq[i]<<" ";
        }
    }
}

int main(){
    string str="hello world";
    FreqChar(str);
    cout<<endl;
    return 0;
}