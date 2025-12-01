#include <stdio.h>

void counter() {
    /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    static int c = 0;   // static retains value
    c++;
    printf("Function called %d times\n", c);
}

int main() {
    for(int i=0; i<5; i++)
        counter();
    return 0;
}
