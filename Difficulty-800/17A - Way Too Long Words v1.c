// 71A - Way Too Long Words
// Difficulty - 800
/*
Sometimes some words like "localization" or "internationalization" are so long that writing them many times in 
one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be 
replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we 
write the number of letters between the first and the last letters. That number is in decimal system and doesn't 
contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words 
should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

Input:
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the 
words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

Output:
Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

Examples:
input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output:
word
l10n
i18n
p43s
*/

// V1: One by one input and output
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word[500];
    for(int i = 1; i <=n ; i++){  // Runs a loop for 'n' times
        scanf("%s", word);
        if(strlen(word) > 10){  // Checks if length of the string named 'word' is greater than 10
            printf("%c%d%c\n", word[0], strlen(word) - 2, word[strlen(word) - 1]);  // word[0] == first character of the string named 'word'
        }                                                                           // word[strlen(word) - 1] == last character of the string named 'word'
        else{
            printf("%s\n", word);  // Prints the whole 'word' string if length of 'word' string is NOT greater than 10
        }
    }
    return 0;
}

// 221194590	Aug/31/2023 02:17UTC+6	RoronoaArko	71A - Way Too Long Words	GNU C11	Accepted	15 ms	0 KB
