
// 158A - Next Round
// Difficulty - 800
/*
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next 
round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how 
many participants will advance to the next round.

Input:
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned 
by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to 
n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output:
Output the number of participants who advance to the next round.

Examples:
input:
8 5
10 9 8 7 7 7 5 5
output:
6
input:
4 2
0 0 0 0
output:
0

Note:
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also 
earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.
*/

// V2: Input must be in descending order.
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a;
    for (int i = 0; i < k; ++i)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            printf("%d", i);    // if input for 'a' is '0', prints the current value of 'i' and exits from the program
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        scanf("%d", &b);
        if (b != a)
        {
            printf("%d", i);    // if input for 'b' is not equal to the last input for 'a', prints the current value of 'i' and exits from the program
            return 0;
        }
    }

    printf("%d", n);    // If neither the first nor the second loop terminates the program, it means that all... 
    return 0;           //... the integers in the sequence are equal to 'a' and everyone got the same score. 
}                       // In this case, prints the value of 'n' and exits the program


// 221847511	Sep/04/2023 23:04UTC+6	RoronoaArko	158A - Next Round	GNU C11	Accepted	30 ms	0 KB
