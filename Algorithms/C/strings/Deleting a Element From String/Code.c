//C Programming Code for Deleting Elements from Strings | Sentence

#include<stdio.h>
#include<string.h>
void DELETE(char str[],int position, int length);
main()
{
char str[100];
int position, length;
printf("Enter the string\n");
scanf("%s",str);
printf("From which position the characters of a string should be deleted\n");
scanf("%d",&position);
printf("How many character should be deleted from %d position\n",position);
scanf("%d",&length);
DELETE(str,position,length);
printf("String after deletion of characters = %s\n",str);
}
void DELETE(char str[],int position, int length)
{
int i=0;
int j =0;
char target[100];
while(i<position-1)
{
target[j]=str[i];
i++;
j++;
}
i = i + length;
while(str[i]!='\0')
{
target[j]=str[i];
i++;
j++;
}
target[j]='\0';
strcpy(str,target);
}

/* OUTPUT:
Enter the string
123456789
From which position the characters of a string should be deleted
2
How many character should be deleted from 2 position
3
String after deletion of characters = 156789 */
