# Day43-of-43-days-of-Teachersdaychallenge

D. Magic Numbers
time limit per test2 seconds
memory limit per test256 megabytes
Consider the decimal presentation of an integer. Let's call a number d-magic if digit d appears in decimal presentation of the number on even positions and nowhere else.

For example, the numbers 1727374, 17, 1 are 7-magic but 77, 7, 123, 34, 71 are not 7-magic. On the other hand the number 7 is 0-magic, 123 is 2-magic, 34 is 4-magic and 71 is 1-magic.

Find the number of d-magic numbers in the segment [a, b] that are multiple of m. Because the answer can be very huge you should only find its value modulo 109 + 7 (so you should find the remainder after dividing by 109 + 7).

Input
The first line contains two integers m, d (1 ≤ m ≤ 2000, 0 ≤ d ≤ 9) — the parameters from the problem statement.

The second line contains positive integer a in decimal presentation (without leading zeroes).

The third line contains positive integer b in decimal presentation (without leading zeroes).

It is guaranteed that a ≤ b, the number of digits in a and b are the same and don't exceed 2000.

Output
Print the only integer a — the remainder after dividing by 109 + 7 of the number of d-magic numbers in segment [a, b] that are multiple of m.

Examples
Input
2 6
10
99

Output
8

Input
2 0
1
9

Output
4

Input
19 7
1000
9999

Output
6

B. Pashmak and Flowers
time limit per test1 second
memory limit per test256 megabytes
Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

Your task is to write a program which calculates two things:

The maximum beauty difference of flowers that Pashmak can give to Parmida.
The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
Input
The first line of the input contains n (2 ≤ n ≤ 2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1 ≤ bi ≤ 109).

Output
The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.

Examples
Input
2
1 2

Output
1 1

Input
3
1 4 5

Output
4 1

Input
5
3 1 2 3 1

Output
2 4
