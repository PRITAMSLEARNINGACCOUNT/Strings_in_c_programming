#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = {'P', 'R', 'I', 'T', 'A', 'M', '\0'};
    char Title[30] ;
    char Name[] = "Sudarsana Bhattacharya";
    char *ptr = Name;
    int i = 0;
    printf("Give whatever you want to say or just give a name \n");
    gets(Title);
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
    int a = 0;
    printf("\n");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    int b = 0;
    printf("\n");

    do
    {

        printf("%c", Title[b]);
        b++;

    } while (Title[b] != '\0');
    return 0;
}