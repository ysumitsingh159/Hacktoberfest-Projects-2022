#include<stdio.h>
#include<string.h>
void read_sentence(char sentence[]);
void count(char sentence[]);
main()
{
char sentence[200];
printf("Enter the sentence:\n");
read_sentence(sentence);
count(sentence);
}
void read_sentence(char sentence[])
{
gets(sentence);
}
void count(char sentence[])
{
int alphabet_count = 0;
int digit_count = 0;
int special_count = 0;
int index = 0;
while(sentence[index]!='\0')
{
if(sentence[index] >='A' && sentence[index]<='Z')
alphabet_count++;
else if(sentence[index] >='a' && sentence[index]<='z')
alphabet_count++;
else if(sentence[index] >='0' && sentence[index]<='9')
digit_count++;
else
special_count++;
index++;
}
printf("Number of alphabets = %d\n",alphabet_count);
printf("Number of digits = %d\n",digit_count);
printf("Number of special characters = %d\n",special_count);
}
