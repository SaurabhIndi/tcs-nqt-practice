# include <iostream>
# include <climits> // For INT_MIN and INT_MAX
using namespace std;
// Function to find the second largest and second smallest elements in an array
void findSecondLargestAndSmallest(int arr[], int n, int &secondLargest, int &secondSmallest) {
    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return;
    }

    int largest = INT_MIN, smallest = INT_MAX;
    secondLargest = INT_MIN;
    secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }

        // Update smallest and second smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] > smallest) {
            secondSmallest = arr[i];
        }
    }
}
// Main function to test the above function
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest, secondSmallest;

    findSecondLargestAndSmallest(arr, n, secondLargest, secondSmallest);

    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}