#include<stdio.h>
#include<string.h>
int main(){
    char firstname[20];
    char lastname[20];
    printf("Give a first name of any human\n");
    gets(firstname);
    printf("Give a last name\n");
    gets(lastname);
    strcat(firstname,lastname);
    
        printf("%s", firstname);
   return 0;
    
}