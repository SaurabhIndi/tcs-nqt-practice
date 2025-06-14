# include <iostream>
# include <set>
using namespace std;
int main(){
    int n=6;
    int arr[]={55,66,5,1,22,55};
    for(int i=0;i<n;i++){
        set<int>s;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]){
                s.insert(arr[j]);
            }
        }
        cout<<s.size()+1<<" ";
    }
}