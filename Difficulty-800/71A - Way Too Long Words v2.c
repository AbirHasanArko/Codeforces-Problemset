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

// V2: All inputs at one time, all outputs at one time
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word[n][500];  // This array has 'n' number of rows and 500 columns. So, this array can store n words, each with 500 letters
    char length[n];     // This string has 'n' number of characters. One character to store the length of one word
    char index[n];      // This string has 'n' number of characters. One character to store the last index of one word
    for(int i = 0; i <= n-1; i++){
        scanf("%s", &word[i]);      //Scans a string and puts it in the 'i'th row of the array named 'word'
        length[i] = strlen(word[i]);    // Determines the length of the 'i'th row of the array named 'word'
        index[i] = length[i] - 1;   // Determines the last index of the 'i'th row of the array named 'word'
    }
    for(int i = 0; i <= n-1; i++){
        if(length[i] > 10){
            printf("%c%d%c\n", word[i][0], length[i] - 2, word[i][index[i]]); // word[i][0] == first character of 'i'th row
        }                                                                     // word[i][index[i]] == last character of 'i'th row
        else{
            for(int j = 0; j < length[i]; j++)
            printf("%c", word[i][j]);  // Prints all characters in 'i'th row
            printf("\n");
        }
    }
    return 0;
}

// 221188029	Aug/31/2023 00:58UTC+6	RoronoaArko	71A - Way Too Long Words	GNU C11	Accepted	15 ms	100 KB    
