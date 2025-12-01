#include <stdio.h>

int main() {
    /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}