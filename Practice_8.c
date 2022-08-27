#include <stdio.h>
int occurances(char array[], char charecter[])
{
    int count=0;
    int a=0;
    for (int i = 0; array[i]!='\0'; i++)
    {
        if (array[i]==charecter[a])
        {
            count++;
        }
        //a++;
        
    }
    return count;
    
}
int main()
{
    char charecter[100];
    char array[100];
    printf("Give a charecter or a word or a sentence\n");
    gets(array);
    printf("Which number you want to find in your given charecter\n");
    scanf("%s", charecter);
    printf("So the charecter you want to find occured in your given word or sentence is %d\n", occurances(array, charecter));

    return 0;
}