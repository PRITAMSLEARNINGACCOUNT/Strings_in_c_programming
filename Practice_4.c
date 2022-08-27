#include<stdio.h>
void slice(char string[],int number){
    int i=0;
    while ((number-i)<=number)
    {
        string[i]=string[++i];
        if ((number-i)==1)
        {
            break;
        }
        
    }
    string[i]='\0';
    
}
int main(){
    char string[100];
    int n;
    printf("Give a charecter or a word or a sentence\n");
    gets(string);
    printf("How much sring you want to cut\n"); 
    scanf("%d",&n);
    slice(string,n);
    printf("So the cutted string is %s\n",string);
    return 0;
}