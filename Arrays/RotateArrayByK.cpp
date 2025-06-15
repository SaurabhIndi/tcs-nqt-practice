#include <iostream>

using namespace std;

// Function to Reverse the array
void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k) {
  // Handle cases where k is greater than n or negative
  k = k % n;
  if (k < 0) {
    k += n;
  }

  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k) {
  // Handle cases where k is greater than n or negative
  k = k % n;
  if (k < 0) {
    k += n;
  }

  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

int main() {
  // Example for right rotation
  int arr_right[] = {1, 2, 3, 4, 5, 6, 7};
  int n_right = 7;
  int k_right = 2;
  cout << "Original array for right rotation: ";
  for (int i = 0; i < n_right; i++) {
    cout << arr_right[i] << " ";
  }
  cout << endl;
  Rotateeletoright(arr_right, n_right, k_right);
  cout << "After Rotating " << k_right << " elements to right: ";
  for (int i = 0; i < n_right; i++) {
    cout << arr_right[i] << " ";
  }
  cout << endl << endl;

  // Example for left rotation
  int arr_left[] = {1, 2, 3, 4, 5, 6, 7};
  int n_left = 7;
  int k_left = 2;
  cout << "Original array for left rotation: ";
  for (int i = 0; i < n_left; i++) {
    cout << arr_left[i] << " ";
  }
  cout << endl;
  Rotateeletoleft(arr_left, n_left, k_left);
  cout << "After Rotating " << k_left << " elements to left: ";
  for (int i = 0; i < n_left; i++) {
    cout << arr_left[i] << " ";
  }
  cout << endl;

  return 0;
}