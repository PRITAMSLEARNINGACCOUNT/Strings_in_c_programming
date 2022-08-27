#include <stdio.h>
#include <string.h>
int main()
{
    char String[34];
    char inputing_string_using_gets[100];
    char string1[34];
    printf("Give a charecter\n");
    scanf("%s", String);
    printf("So the charecter given by user is %s\n", String);
    printf("Now we are taking the word charecter by charecter\n");

    for (int i = 0; i <= 33; i++)
    {
        fflush(stdin);
        scanf("%c", &string1[i]);
        if (string1[i] == '\n')
        {
            break;
        }
    }
    printf("The charecter given by the user is %s\n", string1);
    printf("Give a charecter or a word or a sentence\n");
    gets(inputing_string_using_gets);

    printf("So the charecter given by user using gets is %s\n", inputing_string_using_gets);
    return 0;
}
