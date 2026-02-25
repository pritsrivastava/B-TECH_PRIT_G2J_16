#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enter an alphabet:");
    scanf(" %c",&ch);
    if(isalpha(ch)){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("it is a vowel.\n");
        else
        printf("it is a consonant.\n");
    }
    else{
        printf("invalid input! please enter an alphabet.\n");
    }
    return 0;
}