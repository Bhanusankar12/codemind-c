#include<stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if(s=='A'||s=='E'||s=='I'||s=='O'||s=='U'||s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
	printf("Vowel");
	else
	printf("Consonant");
}