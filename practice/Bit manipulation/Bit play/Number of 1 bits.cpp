// Write a function that takes an integer and returns the number of 1 bits it has.

int Solution::numSetBits(unsigned int A) {
    int count = 0;
    while(A>0){
        
        A = A & (A-1);
        count++;
    }
    return count;
}
