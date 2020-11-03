#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
int countLetter(char* pword, int &lettercount, int &vowelcount);
int main()
{
	int lettercount=0;
	int vowelcount=0;
	char word[20] = "";
	scanf("%s",word);
	char* pword = word;
	countLetter(pword,lettercount,vowelcount);
	if (vowelcount == 1 && lettercount == 1)
		printf("%s contains %d consonant and %d vowel", word, lettercount, vowelcount);
	else if (vowelcount == 1)
		printf("%s contains %d consonants and %d vowel", word, lettercount, vowelcount);
	else if (lettercount == 1)
		printf("%s contains %d consonant and %d vowels", word, lettercount, vowelcount);
	else
		printf("%s contains %d consonants and %d vowels", word, lettercount, vowelcount);
	return 0;
}
int countLetter(char* pword, int& lettercount, int& vowelcount)
{
	for (int i=0;i<strlen(pword);i++)
	{
		if (pword[i]== 'a' || pword[i] == 'e' || pword[i] == 'i' || pword[i] == 'o' || pword[i] == 'u')
		{
			vowelcount++;
		}
		else
		{
			lettercount++;
		}
	}
	return 0;
}
