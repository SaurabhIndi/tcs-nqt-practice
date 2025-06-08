# include <iostream>
# include <algorithm>
# include <set>
using namespace std;

int removeDups(int arr[],int n){
    set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
    for(int i : set){
        arr[j]=i;
        j+=1;
    }
    return k;
}

int main(){
    int arr[]={1,1,1,2,2,3,3,4,4,6,6,6,7,7,5,5,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDups(arr,n);
    cout<<"After removing Duplicates: "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Time complexity: O(n*log(n))+O(n)

// Space Complexity: O(n) 