#include<bits/stdc++.h>
using namespace std;

string reverseStr(string str){
    int n=str.length();
    stack<char> st;
    for (int i=0;i<n;i++){
        st.push(str[i]);
    }
    int j=0;
    while(!st.empty()){
        char temp=st.top();
        str[j]=temp;
        st.pop();
        j++;
    }
    return str;
}

int main(){
    string str="HELLO take u forward";
    cout<<reverseStr(str)<<endl;
    return 0;
}