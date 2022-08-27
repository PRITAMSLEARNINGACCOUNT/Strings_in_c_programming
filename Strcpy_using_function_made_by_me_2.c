#include <stdio.h>
#include <string.h>
void copy(char ptr[], char ptr2[], int num, int num2)
{
    char array[500];
    if (num2 > num)
    {
        for (int a = 0; ptr2[a] != '\0'; a++)
        {
            //array[a] = ptr2[a];
            // ptr2[a]++;
            ptr[a] = ptr2[a];
            // ptr[a]++;
        }
    }
    else
    {
        for (int a = 0; ptr[a] != '\0'; a++)
        {
            //array[a] = ptr2[a];
            // ptr2[a]++;
            ptr[a] = ptr2[a];
            // ptr[a]++;
        }
    }
}

int main()
{
    char array[100];
    char array1[100];
    int length1 = 0;
    int length2 = 0;
    // char copiedarray[5000];
    printf("Give a First Charecter or Word\n");
    gets(array);
    printf("Give a Second Charecter or Word\n");
    gets(array1);
    length1 = strlen(array);
    length2 = strlen(array1);
    copy(array, array1, length1, length2);

    printf("So the copied charecter or sentence or word is %s\n", array);
    // for (int i = 0; array[i] != '\0'; i++)
    // {
    //     printf("%c", &array[i]);
    // }
    // printf("The length of the string after copy is %d\n",strlen(array));

    return 0;
}