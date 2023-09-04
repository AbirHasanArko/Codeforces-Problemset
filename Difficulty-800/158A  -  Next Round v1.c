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

// V1: Input can be in any order, NO NEED to be in ascending and descending order.
#include<stdio.h>
int main (){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];   // 'n' number participants will have 'n' number of marks
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cutMark = a[k-1];  // the index of cut-off mark in 'a[]' array will be 'k-1', as we are counting from '0'
    int count = 0;
    for(int i = 0; i < n; i ++){
        if(a[i] >= cutMark && a[i] != 0){
            count += 1;    // if a[i] >= cutMark and a[i] is not equal to '0', increase the value of 'count' by '1'
        }
    }
    printf("%d", count);
    return 0;
}

// 221842174	Sep/04/2023 22:17UTC+6	RoronoaArko	158A - Next Round	GNU C11	Accepted	30 ms	0 KB
