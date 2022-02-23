#include "header.h"
#include <algorithm>

void find_prime_factors(std::vector<int> &vec, int N)
{
    int i = 2;

    while (i * i <= N)
    {
        if(vec[i] == 0)
        {
            int k = i * i;
            while (k <= N)
            {
                vec[k] = i;
                k += i;
            }
        }
        ++i;
    }
}

void find_semiPrimes(const std::vector<int> & prime_factors, std::vector<int> & semi_primes)
{
    for (size_t i = 4; i < prime_factors.size(); ++i)
    {
        if(prime_factors[i] != 0 && prime_factors[i / prime_factors[i]] == 0)
            semi_primes[i] = 1;
    }
    
}

void calc_semiSum(const std::vector<int> & semi_primes, std::vector<int> & sum)
{
    for(size_t i = 1; i < sum.size(); ++i)
    {
        sum[i] = semi_primes[i - 1] + sum[i - 1];
    }
}

std::vector<int> solution(int N, std::vector<int> &P, std::vector<int> &Q)
{
    std::vector<int> numberFactors (N + 1, 0);
    find_prime_factors(numberFactors, N);

    std::vector<int> semiPrimes(N + 1, 0);
    find_semiPrimes(numberFactors, semiPrimes);

    std::vector<int> semiSum (N + 2, 0);
    calc_semiSum(semiPrimes, semiSum);

    std::vector<int> result(P.size(), 0);
    for(size_t i = 0; i < P.size(); ++i)
    {
        int end_range = std::min(Q[i], N);

        result[i] = semiSum[end_range + 1] - semiSum[P[i] ];
    }

    return result;
}