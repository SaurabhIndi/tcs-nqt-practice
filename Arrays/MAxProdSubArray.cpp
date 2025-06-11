#include<iostream>
#include<vector>
#include<climits>
// #include<bits/stdc++.h>
using namespace std;

int maxProdSArray(vector<int> arr){
    int result=INT_MIN;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod*=arr[k];
                result=max(prod,result);
            }
        }
    }
    return result;
}

int main(){
    vector<int> arr={1,2,-3,0,-4,-5};
    cout<<"Max Prod: "<<maxProdSArray(arr)<<endl;
    return 0;
}