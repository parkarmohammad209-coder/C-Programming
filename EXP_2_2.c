#include<stdio.h>
int main()
{
    /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    int i,x,y,z,sum=0;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the number:");
    scanf("%d",&y);

    if (x>y)
    {
        z=x;
        x=y;
        y=z;
    }
    printf("\nThe odd numbers between %d and %d are",x,y);
    for(i=x;i<=y;i++)
    {
        if (i%2!=0)
        {
        printf("%3d",i);
        sum=i+sum;
        }
    }
    printf("\nSum of all odd numbers between %d & %d is\n%d",x,y,sum);
}