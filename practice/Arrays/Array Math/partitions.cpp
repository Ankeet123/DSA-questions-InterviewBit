// You are given a 1D integer array B containing A integers.

// Count the number of ways to split all the elements of the array into 3 contiguous parts so that the sum of elements in each part is the same.

// Such that : sum(B[1],..B[i]) = sum(B[i+1],...B[j]) = sum(B[j+1],...B[n]) 
#include<vector>
int Solution::solve(int n, vector<int> &B) {
     int suffixes_arr[n] = {0};
    int total_sum = 0; 
      
    // Calculating the sum of the array 
    for (int i = 0 ; i < n ; i++) { 
       total_sum += B[i]; 
    } 
  
    // Checkingtotal_sumis divisible by 3 or not 
    if (total_sum % 3 != 0) {
        return 0; 
     }
      
    // Calculating the sum of each part 
    int part_sum = total_sum / 3; 
      
    // If the sum of elements from n-1 th to ith
    // equals to sum of part putting 1 in suffixes_arr  
    // array otherwise 0.
    int suffix_sum = 0;
    for (int i = n-1; i >= 0 ; i--){ 
        suffix_sum += B[i]; 
        if (suffix_sum == part_sum){ 
            suffixes_arr[i] = 1; 
	    }
    } 
      
    // Calculating the cumulative sum 
    // of the array suffixes_arr from the last index. 
    for (int i = n-2 ; i >= 0 ; i--) {
        suffixes_arr[i] += suffixes_arr[i + 1]; 
    }
      
    int count = 0; 
    int temp_sum = 0; 
      
    // Calculating answer using original 
    // and suffixes_arr array. 
    for (int i = 0 ; i < n -2 ; i++) { 
        temp_sum += B[i]; 
        if (temp_sum == part_sum) { 
            count += suffixes_arr[i + 2];
	}			
    } 
    return count; 
}
