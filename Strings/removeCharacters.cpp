#include <bits/stdc++.h>
using namespace std;

string removeCharacter(string str){
    int n=str.length();
    string ans;
    for (int i=0;i<n;i++){
        int ascii = (int) str[i];
        if((ascii >= 65 && ascii <= 90) || (ascii>=97 && ascii<=122)){
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main(){
    string str="25986t243ake12498u  347/+for3678+/6/',.'/ward";
    cout<<removeCharacter(str)<<endl;
    return 0;
}