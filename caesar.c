#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int i;
    int j;
    char temp[100];
    char text[100];
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("Please Set Text: ");
    scanf("%s",text);

    for (j=0; j<100; j++) {
    for (i=0; i<=26; i++)  {
      if (text[j]==alphabet[i]) {
        printf("%c",alphabet[i+1]);

          }
        }
      }
    printf("\n");
    return(0);
}
