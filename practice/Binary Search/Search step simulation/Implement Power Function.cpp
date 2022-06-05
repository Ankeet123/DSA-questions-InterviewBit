// Implement pow(x, n) % d.
// In other words, given x, n and d,

// find (xn % d)

// Note that remainders on division cannot be negative. In other words, make sure the answer you return is non negative.



// Problem Constraints
// -109 <= x <= 109
// 0 <= n <= 109
// 1 <= d <= 109

#define ll long long int
// int Solution::pow(int base, int expo, int m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     if(m==1) return 0;
//     ll ans=1,y=base%m;
//     while(expo>0){
//         if(expo&1)
//          ans=((ans)*y)%m;
//         y=(y*y)%m;
//         if(y<0) y+=m;
//         expo=expo>>1;
//     }
//     if(ans<0){
//         ans=(m-abs(ans)%m);
//         return ans;
//     }
//     return ans;
// }
int Solution::pow(int x, int n, int p) {
    assert(x >= -1e9 && x <= 1e9);
    assert(n >= 0 && n <= 1e9);
    assert(p >= 1 && p <= 1e9);
    if (n == 0) return 1 % p;

			long long ans = 1, base = x;
			while (n > 0) {
				// We need (base ** n) % p. 
				// Now there are 2 cases. 
				// 1) n is even. Then we can make base = base^2 and n = n / 2.
				// 2) n is odd. So we need base * base^(n-1) 
				if (n % 2 == 1) {
					ans = (ans * base)%p;
					n--;
				} else {
					base = (base * base)%p;
					n /= 2;
				}
			}
			if (ans < 0) ans = (ans + p) % p;
			return ans;
}


