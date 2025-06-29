#include <bits/stdc++.h>
using namespace std;

int SumNum(string str){
    int n=str.length();
    int sum=0;
    string ans="";
    for (int i=0;i<n;i++){
        if(str[i]>='0' && str[i]<='9'){
            ans += str[i];
        }
        else{
            sum += atoi(ans.c_str());
            ans="";
        }
    }
    return sum + atoi(ans.c_str());
    // return to_string(sum + atoi(ans.c_str()));
}

int main(){
    string st = "1a30z67";
    cout<<SumNum(st)<<endl;
    return 0;
}