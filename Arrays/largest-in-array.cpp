# include <iostream>
using namespace std;

// Function to find the largest element in an array
int largestInArray(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is greater
        }
    }
    return largest; // Return the largest element found
}
// Main function to test the largestInArray function
int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int largest = largestInArray(arr, size); // Call the function to find the largest element
    cout << "The largest element in the array is: " << largest << endl; // Output the result

    return 0; // Indicate successful completion
}