// C++ program to maximize the sum of K elements
// in the array by taking only corner elements

#include <bits/stdc++.h>
using namespace std;

// Function to return maximum sum
int maxSum(int arr[], int K, int start, int end, int max_sum)
{
	// Base case
	if (K == 0)
		return max_sum;

	// Pick the start index
	int max_sum_start = max_sum + arr[start];

	// Pick the end index
	int max_sum_end = max_sum + arr[end];

	// Recursive function call
	int ans = max(
		maxSum(arr, K - 1, start + 1, end, max_sum_start),
		maxSum(arr, K - 1, start, end - 1, max_sum_end));

	// Return the final answer
	return ans;
}

// Function to find the maximized sum
void maximizeSum(int arr[], int K, int n)
{
	int max_sum = 0;
	int start = 0;
	int end = n - 1;
	cout << maxSum(arr, K, start, end, max_sum);
}

// Driver code
int main()
{
	int arr[] = { 8, 4, 4, 8, 12, 3, 2, 9 };
	int K = 2;
	int n = sizeof(arr) / sizeof(arr[0]);
	maximizeSum(arr, K, n);
	return 0;
}

