#include<iostream>
#include <algorithm>
using namespace std;

void median(int arr[],int n){
    if(n%2==0){
        int ind1 = (n/2)-1;
        int ind2 = (n/2);

        cout<<"Median: "<<(double)(arr[ind1]+arr[ind2])/2<<endl;
    }
    else{
        cout<<"Median: "<<(double)arr[(n/2)]<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    median(arr,n);

}