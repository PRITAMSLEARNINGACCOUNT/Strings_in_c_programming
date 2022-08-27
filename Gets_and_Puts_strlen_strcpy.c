#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    printf("Enter a word or sentence\n");
    gets(string);
    printf("So the name word or sentence given by you is ");
    char copy[30];
    strcpy(copy,string);
    puts(copy);
    printf("The length of the string given by you is %d\n",strlen(string));
}