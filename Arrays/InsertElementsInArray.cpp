// SOLUTION : 1 NOT USING VECTOR

#include <stdio.h>
#include <iostream>

using namespace std;

void insertatbegin(int* arr,int n, int value){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}

void insertatEnd(int* arr,int n,int value){
    arr[n]=value;
}

void insertatposition(int* arr, int n, int value, int pos){
    for(int i = n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}


int main() {
    int n = 8;
    int arr[11] = {10, 9, 14, 8, 20, 48, 16, 9}; // Increased array size to accommodate multiple insertions
    int value = 40;
    int pos = 5;

    // --- Insert at Beginning ---
    cout << "--- Inserting at Beginning ---" << endl;
    cout << "Array before insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertatbegin(arr, n, value);
    n++; // Increment n as an element is added
    cout << "Array after inserting " << value << " at beginning: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // --- Insert at End ---
    cout << "--- Inserting at End ---" << endl;
    // Resetting array for clarity or you can continue with the modified array
    // For this example, we'll continue with the modified array from the previous step.
    // If you want to see the effect on the original array, reinitialize it here.
    int arr_end[11] = {10, 9, 14, 8, 20, 48, 16, 9};
    int n_end = 8;
    int value_end = 50;

    cout << "Array before insertion: ";
    for (int i = 0; i < n_end; i++) {
        cout << arr_end[i] << " ";
    }
    cout << endl;

    insertatEnd(arr_end, n_end, value_end);
    n_end++; // Increment n_end as an element is added
    cout << "Array after inserting " << value_end << " at end: ";
    for (int i = 0; i < n_end; i++) {
        cout << arr_end[i] << " ";
    }
    cout << endl << endl;

    // --- Insert at Position ---
    cout << "--- Inserting at Specific Position (" << pos << ") ---" << endl;
    // Resetting array for clarity
    int arr_pos[11] = {10, 9, 14, 8, 20, 48, 16, 9};
    int n_pos = 8;
    int value_pos = 100;

    cout << "Array before insertion: ";
    for (int i = 0; i < n_pos; i++) {
        cout << arr_pos[i] << " ";
    }
    cout << endl;

    insertatposition(arr_pos, n_pos, value_pos, pos);
    n_pos++; // Increment n_pos as an element is added
    cout << "Array after inserting " << value_pos << " at position " << pos << ": ";
    for (int i = 0; i < n_pos; i++) {
        cout << arr_pos[i] << " ";
    }
    cout << endl;

    return 0;
}

// // SOLUTION : 2 USING VECTOR

// #include <iostream>
// #include <vector> // Include the vector header

// using namespace std; // Using the std namespace

// // Function to insert a value at the beginning of the vector
// void insertAtBegin(vector<int>& arr, int value) {
//     // vector::insert(iterator position, value)
//     // arr.begin() gives an iterator to the first element
//     arr.insert(arr.begin(), value);
// }

// // Function to insert a value at the end of the vector
// void insertAtEnd(vector<int>& arr, int value) {
//     // vector::push_back(value) adds an element to the end
//     arr.push_back(value);
// }

// // Function to insert a value at a specific position in the vector
// void insertAtPosition(vector<int>& arr, int value, int pos) {
//     // vector::insert(iterator position, value)
//     // To get an iterator to the desired position (pos is 1-based in your original code)
//     // arr.begin() + (pos - 1) gives an iterator to the (pos-1)th index (0-based)
//     if (pos >= 1 && pos <= arr.size() + 1) { // Validate position
//         arr.insert(arr.begin() + (pos - 1), value);
//     } else {
//         cout << "Error: Invalid position for insertion." << endl;
//     }
// }

// // Helper function to print a vector
// void printVector(const vector<int>& arr) {
//     for (int x : arr) { // Range-based for loop (C++11 and later)
//         cout << x << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int value = 40;
//     int pos = 5;

//     // --- Insert at Beginning ---
//     cout << "--- Inserting at Beginning ---" << endl;
//     vector<int> arr_begin = {10, 9, 14, 8, 20, 48, 16, 9};

//     cout << "Vector before insertion: ";
//     printVector(arr_begin);

//     insertAtBegin(arr_begin, value);
//     cout << "Vector after inserting " << value << " at beginning: ";
//     printVector(arr_begin);
//     cout << endl;

//     // --- Insert at End ---
//     cout << "--- Inserting at End ---" << endl;
//     vector<int> arr_end = {10, 9, 14, 8, 20, 48, 16, 9};
//     int value_end = 50;

//     cout << "Vector before insertion: ";
//     printVector(arr_end);

//     insertAtEnd(arr_end, value_end);
//     cout << "Vector after inserting " << value_end << " at end: ";
//     printVector(arr_end);
//     cout << endl;

//     // --- Insert at Specific Position ---
//     cout << "--- Inserting at Specific Position (" << pos << ") ---" << endl;
//     vector<int> arr_pos = {10, 9, 14, 8, 20, 48, 16, 9};
//     int value_pos = 100;

//     cout << "Vector before insertion: ";
//     printVector(arr_pos);

//     insertAtPosition(arr_pos, value_pos, pos);
//     cout << "Vector after inserting " << value_pos << " at position " << pos << ": ";
//     printVector(arr_pos);
//     cout << endl;

//     return 0;
// }