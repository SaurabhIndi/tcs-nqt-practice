# include <iostream>
using namespace std;
// Function to find the smallest element in an array
int findSmallest(int arr[], int size) {
    int smallest = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller element is found
        }
    }
    return smallest;
}
// Main function to test the findSmallest function
int main() {
    int arr[] = {5, 3, 8, 1, 2}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int smallest = findSmallest(arr, size); // Call the function to find the smallest element
    cout << "The smallest element in the array is: " << smallest << endl; // Output the result
    return 0; // Return success
}