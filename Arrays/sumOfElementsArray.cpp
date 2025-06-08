# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=arr[i];
    }
    cout<<"the sum is : "<<cnt<<endl;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n = 5;
// 	vector<int>arr = {1, 2, 3, 4, 5};
// 	int sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += (double)arr[i];
// 	}
// 	cout <<"The sum of the elements of the array is "<< sum;
// }