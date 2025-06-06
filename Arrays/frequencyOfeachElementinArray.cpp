# include <iostream>
# include <unordered_map>
# include <vector>

using namespace std;
void freq(const vector<int>& arr, int n){
    unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }

    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main (){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    freq(arr,n);
}