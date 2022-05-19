// Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.
#include<math.h>
int* plusOne(int* A, int n1, int *len1) {
int i,dig,carry=1,len=0;
    int *out = (int *)malloc(sizeof(int)*(n1+1));
    int oind = n1;
    for(i=n1-1;i>=0;i--){
        out[oind--] = (A[i]+carry)%10;
        carry = (A[i]+carry)/10;
    }
    out[oind] = carry;
    for(i=0;i<n1+1&&out[i]==0;i++)
        len++;
    out = out+len;
    *len1=n1+1-len;
    return out;
}
// #include<math.h>
// int* plusOne(int* A, int n1, int *len1) {
//     int i; double sum = 0;
//     for(i=0; i<n1; i++){
//         sum += A[i]*pow(10, (n1-1-i));
        
//     }
//     sum = sum + 1;
//     int num; double remain;
//     len1 = (int *)malloc(n1*sizeof(int));
//     for(i=0; i<n1; i++){
//         num = floor(sum / (pow(10, n1-1-i)));
        
//         len1[i] = num;
//         remain = fmod(sum, (pow(10, n1-1-i)));

//         sum = remain;
//     }
//     return len1;
// }