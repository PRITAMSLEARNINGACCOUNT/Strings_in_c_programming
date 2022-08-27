#include <stdio.h>
#include <string.h>
void print(char *ptr, char *ptr2, int num, int num2)
{
    int count = 0;
    for (int i = 0; *ptr != '\0 '; i++)
    {
        if (*ptr == *ptr2)
        {
            count++;
            *ptr2++;
        }
        *ptr++;
        //*ptr2++;
    }
    //     if (count == num)
    //     {
    //         printf("So the word you want to find has been founded\n");
    //     }
    printf("So the counted string is %d\n", count);
    printf("So the length of the finding word is %d\n", num);
}
int main()
{
    char string[100];
    char array[100];
    printf("Give a charecter or a word or a sentence\n");
    gets(string);
    printf("Give a charecter or a word or a sentence\n");
    gets(array);
    int a = strlen(array);
    int b = strlen(string);
    print(string, array, a, b);

    return 0;
}