#include <stdio.h>
#include <string.h>
void slice(char string[], int number)
{
    printf("So the cutted string is ");
    for (int i = 0; i <= number; i++)
    {
        printf("%c", string[i]);
    }
}
int main()
{
    char string[100];
    int n;
    int startcut;
    printf("Give a charecter or a word or a sentence\n");
    gets(string);
    // printf("From where you want to start cut the string\n");
    // scanf("%d", &startcut);
    printf("How much string you want to cut\n");
    scanf("%d", &n);
    slice(string, n);

    // printf("So the cutted string is %s\n", string);
    return 0;
}