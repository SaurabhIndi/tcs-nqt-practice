# include <iostream>
# include <algorithm>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<=end)
    {int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;}
}

void rotate(int arr[],int n,int k){
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=2;
    rotate(arr, n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}