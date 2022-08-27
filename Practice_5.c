#include <stdio.h>

int main()
{
    char strlen[500];
    char copy[100];
    printf("Give some words or sentence\n");
    gets(strlen);
    printf("Give some words or sentence\n");
    gets(copy);
    // int count = 0;
    //  for (int i = 0; copy[i] != '\0'; i++)
    //  {
    //      count++;
    //  }
    //  printf("The length of the string is %d\n",count);
    for (int ia = 0; copy[ia] != '\0'; ia++)
    {
        strlen[ia] = copy[ia];
    }
    printf("So the copied String is ");
    for (int a = 0; copy[a] != '\0'; a++)
    {
        printf("%c", strlen[a]);
    }

    return 0;
}