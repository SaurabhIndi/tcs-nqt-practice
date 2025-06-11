# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

void nonRepeat(vector<int>& arr){
    unordered_map<int,int> map;
    for(auto i : arr) ++map[i];
    cout<<"Elements : "<<endl;
    for(auto j : map){
        if(j.second == 1){
            cout<<j.first<<" ";
        }
    }
    cout<<endl;
}

int main(){
    vector<int> arr={1,2,3};
    nonRepeat(arr);
    return 0;
}