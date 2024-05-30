#include <math.h>

int arrangeCoins(int n) {
    long long n_long = static_cast<long long>(n);
    return static_cast<int>((-1 + floor(sqrt(1 + 8 * n_long))) / 2);
}
