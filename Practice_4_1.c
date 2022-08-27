#include <stdio.h>
void slice(char string[], int number, int startcut)
{
    int i = 0;
    while ((number - i) <= number)
    {
        string[i] = string[i+startcut];
        if ((number - i) == startcut)
        {
            break;
        }
        ++i;
    }

    string[i] = '\0';
}
int main()
{
    char string[100];
    int n;
    int startcut;
    printf("Give a charecter or a word or a sentence\n");
    gets(string);
    printf("From where you want to start cut the string\n");
    scanf("%d", &startcut);
    printf("How much string you want to cut\n");
    scanf("%d", &n);
    slice(string, n, startcut);
    printf("So the cutted string is %s\n", string);
    return 0;
}