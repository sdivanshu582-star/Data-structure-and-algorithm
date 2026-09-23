class Solution {
public:
    long long power(long long a, long long b, long long mod) {
        if (b == 0)
            return 1;

        long long half = power(a, b / 2, mod);
        half = (half * half) % mod;

        if (b % 2 == 1)
            half = (half * a) % mod;

        return half;
    }

    int countGoodNumbers(long long n) {
        long long mod = 1e9 + 7;

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even, mod) * power(4, odd, mod)) % mod;
    }
};