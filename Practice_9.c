#include <stdio.h>
int main()
{
    char string[100];
    char array[2];
    char occurance[2];
    printf("Give a charecter or a word or a sentence\n");
    gets(string);
    printf("Which charecter you want to find from what you have given\n");
    gets(array);
    //scanf("%c",&array[0]);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == array[0])
        {
            occurance[0]=string[i];
        }
    }
    if (occurance[0]==array[0])
    {
        printf("The charecter you want to find from what you have given has been founded\n");
    }

    else
    {
        printf("The charecter you want to find from what you have given has not been founded\n");
    }
    return 0;
}