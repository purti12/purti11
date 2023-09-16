//WAP to check whether the character is vowel or consonant
#include <stdio.h>
int main() 
{
    char ch;
    printf("enter the aplphabet");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
      printf("the alphabet is vowel"); 
    }
    else
    {
       printf("the alphabet is consonant"); 
    }

    return 0;
}