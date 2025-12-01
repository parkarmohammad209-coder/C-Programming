#include <stdio.h>

int main() {
    /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum = %d", (*p + *q));
    return 0;
}