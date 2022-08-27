#include <stdio.h>
#include <string.h>
void decrypt(char *ptr)
{
    // char **charecter = ptr;
    // printf("%s", **charecter);
    // printf("Hii\n");
    //  char *charecter = ptr;
    // while (*ptr != '\0')
    // {
    //     *ptr = *ptr - 1;
    //     ptr++;
    // }
    for (int i = 0; *ptr != '\0'; i++)
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    // return 0;
}
int main()
{
    char array[100];
    int a;
    // char *ptr=array;
    char command[50];
    printf("Give a word or a sentence\n");
    gets(array);
    for (int i = 0; array[i] != '\0'; i++)
    {
        array[i] = array[i] + 1;
        //*ptr=*ptr+1;
    }
    printf("So the encrypted array is %s\n", array);
    printf("Do you want to Decrypt The message(Give the answer in only Yes and No)\n");
    gets(command);
    a = strlen(command);
    if (a == 3 || a > 3)
    {
        decrypt(array);
        printf("So the decrypted message is %s\n", array);
    }
    else
    {
        printf("You do not wanted to Decrypt The message\n");
    }

    return 0;
}