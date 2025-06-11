# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

void findRepeat(vector<int>& arr){
    unordered_map<int,int> map;
    for(auto i : arr){
        ++map[i];
    }
    cout<<"The elements: "<<endl;
    for(auto i : map){
        if(i.second > 1) cout <<i.first<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr={1,1,0};
    findRepeat(arr);
    return 0;
}