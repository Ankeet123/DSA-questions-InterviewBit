// Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.

// Return the count modulo 109 + 7.

// long long int countSetBit(int n){
//     long long int count =0;
//     while(n>0){
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }
int Solution::solve(int A) {
    // int i;
    // long long int ans = 0;
    // for(i=1; i<=A; i++){
    //     ans += countSetBit(i);
    // }
    // return ans%(1000000007);
    int count=0;
    A=A+1;//as we would require 0 to A to get the results instead of 1 to A
    for(int i=0;i<=31;i++){
    //for each bit calculating the total number of set bits for numbers uptil A;
    // that is number of sets of 2^(i+1) ,each set consisting 2^(i) set bits and
    //then adding the remainder of bits by getting the modulus with 2^(i+1)
    //and subtracting the first 2^(i) 0's from the remainder if this result is 
    //negative just take zero
    
    count=(count%1000000007+(A/(int )pow(2,i+1))*(int )pow(2,i)%1000000007+
    max(A%(int)pow(2,i+1)-(int)pow(2,i),0)%1000000007)%1000000007;
    
}



return count;
}
