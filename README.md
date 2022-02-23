# CntSemiPrimers

A prime is a positive integer X that has exactly two distinct divisors: 1 and X. The first few prime integers are 2, 3, 5, 7, 11 and 13.

A semiprime is a natural number that is the product of two (not necessarily distinct) prime numbers.

You are given two non-empty arrays P and Q, each consisting of M integers. These arrays represent queries about the number of semiprimes within specified ranges.

Query K requires you to find the number of semiprimes within the range (P[K], Q[K]), where 1 ≤ P[K] ≤ Q[K] ≤ N.

For example, consider an integer N = 26 and arrays P, Q such that:
   - P[0] = 1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Q[0] = 26
   - P[1] = 4 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Q[1] = 10
   - P[2] = 16 &nbsp;&nbsp;&nbsp;&nbsp; Q[2] = 20

The number of semiprimes within each of these ranges is as follows:

        (1, 26) is 10,
        (4, 10) is 4,
        (16, 20) is 0.

For example, given an integer N = 26 and arrays P, Q such that:
   - P[0] = 1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Q[0] = 26
   - P[1] = 4 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Q[1] = 10
   - P[2] = 16 &nbsp;&nbsp;&nbsp;&nbsp;Q[2] = 20

the function should return the values [10, 4, 0], as explained above.

Write an efficient algorithm for the following assumptions:

        N is an integer within the range [1..50,000];
        M is an integer within the range [1..30,000];
        each element of arrays P and Q is an integer within the range [1..N];
        P[i] ≤ Q[i].



## Time complexity
O(N * log(log(N)) + M) 
