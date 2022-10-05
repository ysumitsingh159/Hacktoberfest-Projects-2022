#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 50
void print_full_name(char fn[], char mn[],char ln[]);
main()
{
char first_name[MAX_LENGTH];
char mid_name[MAX_LENGTH];
char last_name[MAX_LENGTH];
printf("enter your first name, middle name and last name\n");
scanf("%s%s%s",first_name, mid_name,last_name );
print_full_name( first_name, mid_name, last_name);
}
void print_full_name(char fn[], char mn[],char ln[])
{
char full_name[MAX_LENGTH];
strcpy(full_name,fn);// copy first name into full name
strcat(full_name," ");// concat a space to the end.i.e after first name
strcat(full_name,mn);//concat middle name.
strcat(full_name," ");
strcat(full_name,ln);
printf("\nFull name is: %s\n",full_name);
}

/*OUTPut:

enter your first name, middle name and last name
Hacktoberfest
2022
India

Full name is: Hacktoberfest 2022 India

Process returned 0 (0x0) execution time : 30.148 s
