#include<stdio.h>

int main()
{
   /*
    NAME:- PARKAR MOHAMMED DILAWAR
    CLASS:- COMPS F.Y. DIVISION:- C-260
    UIN:- 251P043
    */
    int p,c,m;
    float avg;
    printf("Enter the marks of Physics:");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry:");
    scanf("%d",&c);
    printf("Enter the marks of Maths:");
    scanf("%d",&m);
    avg=(p+c+m)/3.00;
    printf("Physics=%d\nChemistry=%d\nMaths=%d\nAverage=%f\n",p,c,m,avg);
    avg>50?printf("YOU ARE ELIGIBLE FOR ADMISSION...%c",1):printf("YOU ARE NOT ELIGIBLE FOR ADMISSION");
    return 0;
}