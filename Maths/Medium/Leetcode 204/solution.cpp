#include <bitset>
class Solution {
public:
    int countPrimes(int n) {
        if (n < 3) return 0;

        std::bitset<5000000> isPrime;
        isPrime.set();

        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i / 2]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    isPrime[j / 2] = false;
                }
            }
        }

        int count = 1;
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i / 2]) ++count;
        }

        return count;
    }
};

