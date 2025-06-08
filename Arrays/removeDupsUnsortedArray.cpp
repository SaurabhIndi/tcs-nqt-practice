#include <iostream> // Needed for input/output operations like cout and endl
#include <vector>   // Used for std::vector, a dynamic array, which is safer than C-style VLAs

using namespace std; // This line brings the standard C++ library namespace into scope

// This function removes duplicates from an array using a brute-force approach.
// It modifies an internal 'mark' array to identify unique elements and then prints them.
void removeDuplicatesBruteForce(int arr[], int n) {
    // We use a vector named 'mark' of size 'n' and initialize all its elements to 1.
    // '1' will signify that an element is currently considered unique.
    // '0' will signify that an element is a duplicate.
    vector<int> mark(n, 1);

    // The outer loop iterates through each element of the array.
    for (int i = 0; i < n; ++i) {
        // We only proceed if the current element arr[i] hasn't already been marked as a duplicate.
        if (mark[i] == 1) {
            // The inner loop compares arr[i] with all subsequent elements in the array.
            for (int j = i + 1; j < n; ++j) {
                // If a duplicate is found (arr[i] is equal to arr[j]),
                // we mark arr[j] as a duplicate by setting mark[j] to 0.
                if (arr[i] == arr[j]) {
                    mark[j] = 0;
                }
            }
        }
    }

    // After marking all duplicates, we iterate through the array one last time
    // to print only the elements that are marked as unique (i.e., mark[i] == 1).
    cout << "{";
    bool firstPrinted = false; // This flag helps us manage comma placement for output
    for (int i = 0; i < n; ++i) {
        if (mark[i] == 1) { // If this element is unique
            if (firstPrinted) {
                cout << ","; // Add a comma before subsequent elements
            }
            cout << arr[i]; // Print the unique element
            firstPrinted = true; // Set flag to true as an element has been printed
        }
    }
    cout << "}" << endl; // Close the curly brace and add a newline
}

int main() {
    // Example 1 from your problem statement
    int arr1[] = {2, 3, 1, 9, 3, 1, 3, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // Calculate the number of elements in arr1
    cout << "Example 1 Input: {2,3,1,9,3,1,3,9}" << endl;
    cout << "Example 1 Output: ";
    removeDuplicatesBruteForce(arr1, n1); // Call the function to process and print

    cout << endl; // Add a blank line for better readability between examples

    // Example 2 from your problem statement
    int arr2[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n2 = sizeof(arr2) / sizeof(arr2[0]); // Calculate the number of elements in arr2
    cout << "Example 2 Input: {4,3,9,2,4,1,10,89,34}" << endl;
    cout << "Example 2 Output: ";
    removeDuplicatesBruteForce(arr2, n2); // Call the function for the second example

    return 0; // Indicate successful program execution
}