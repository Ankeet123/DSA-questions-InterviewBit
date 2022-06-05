// Given a bitonic sequence A of N distinct elements, write a program to find a given element B in the bitonic sequence in O(logN) time.

// NOTE:

// A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing.
// Input Format
// First argument is an integer array A denoting the bitonic sequence.

// Second argument is an integer B.



// Output Format
// Return a single integer denoting the position (0 index based) of the element B in the array A if B doesn't exist in A return -1.

// Function for binary search in ascending part
int ascendingBinarySearch(vector < int > & arr, int low,
  int high, int key) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
      return mid;
    if (arr[mid] > key)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}

// Function for binary search in descending part of array
int descendingBinarySearch(vector < int > & arr, int low,
  int high, int key) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
      return mid;
    if (arr[mid] < key)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}

// finding bitonic point
int findBitonicPoint(vector < int > & arr, int n, int l, int r) {
  int mid;
  mid = (r + l) / 2;
  if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
    return mid;
  } else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
    return findBitonicPoint(arr, n, mid, r);
  } else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1]) {
    return findBitonicPoint(arr, n, l, mid);
  }
}

// Function to search key in bitonic array
int searchBitonic(vector < int > & arr, int n, int key, int index) {
  if (key > arr[index])
    return -1;

  else if (key == arr[index])
    return index;

  else {
    int temp = ascendingBinarySearch(arr, 0, index - 1, key);
    if (temp != -1) {
      return temp;
    }

    // Search in right of k
    return descendingBinarySearch(arr, index + 1, n - 1, key);
  }
}
int solveQ(vector < int > & arr, int b) {
  int index = findBitonicPoint(arr, arr.size(), 0, arr.size() - 1);
  int x = searchBitonic(arr, arr.size(), b, index);
  return x;
}
int Solution::solve(vector < int > & A, int B) {
  return solveQ(A, B);
}