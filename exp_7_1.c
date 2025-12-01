#include <stdio.h>
int main() { 
    
   /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}