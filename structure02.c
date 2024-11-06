// check weather a no. entered by a user is a vowel or a consonant 

#include <stdio.h>
int main()
{
  char c ;
  printf("enter the alphabet");
  scanf("%d", c);
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E'
        || c == 'i' || c == 'I' || c == 'o' || c == 'O'
        || c == 'u' || c == 'U') {

        printf("The character is a vowel.\n", c);
    }
    else {
        printf("The character is a consonant.\n", c);
    }

    return 0;
}