#include <stdio.h>
int strlen(char *ptr){
    int a=0;
    for (int i = 0; *ptr != '\0'; i++)
    {
        ptr++;
        a++;
    }
    return a;
}
int main()
{
    char string[100];
    int a = 0;
    printf("Give a word or a sentence\n");
    gets(string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        a++;
    }
    printf("So the length of the string aka the word or sentence given by the user is %d\n", a);
    printf("So the length of the string using a Function aka the word or sentence given by the user is %d\n", strlen(string));
    return 0;
}