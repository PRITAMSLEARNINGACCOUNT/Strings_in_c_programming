#include <stdio.h>
int main()
{
    char string[6];
    printf("Give your first name charecter by charecter\n");
    for (int i = 0; i < 6; i++)
    {
        fflush(stdin);
        scanf("%c", &string[i]);
    }
    printf("So the name given by you is %s\n",string);
    printf("So the name given by you is printing using puts Function\n");
    puts(string);
    printf("So the name given by you is printing using a loop charecter by charecter\n");
    for (int ia = 0; ia < 6; ia++)
    {
        printf("%c",string[ia]);
    }
    return 0;
    
}