#include <bits/stdc++.h>
using namespace std;

string removeBrackets(string str){
    int n=str.length();
    string ans;
    for(int i=0;i<n;i++){
        if(str[i]!='(' && str[i]!=')'){
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main(){
    string input1 = "a+((b-c)+d)";
    string input2 = "(((a-b))+c)";
    cout<<removeBrackets(input1)<<endl;
    cout<<removeBrackets(input2)<<endl;
    return 0;
}