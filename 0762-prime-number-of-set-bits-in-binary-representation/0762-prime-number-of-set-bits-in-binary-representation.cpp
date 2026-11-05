class Solution {
public:


bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int countPrimeSetBits(int left, int right)
{
    int result = 0;

    for (int num = left; num <= right; ++num) {

        int x = num;
        int setBits = 0;

        while (x != 0) {
            setBits += x & 1;
            x >>= 1;
        }

        if (isPrime(setBits))
            ++result;
    }

    return result;
}
};