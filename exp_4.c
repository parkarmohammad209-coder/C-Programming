#include<stdio.h>
int prime(int,int);
void main()
{/*
    NAME:- PARKAR MOHAMMED DILAWAR
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    int x,y,z;
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("Enter the 2nd number:");
    scanf("%d",&y);
    if(y<=x){
    z=x;
    x=y;
    y=z;
    }
    printf("Prime Numbers between %d & %d are---",x,y);
    if(x==1)
    x++;
    prime(x,y);
 }   
 int prime(int x,int y)  
 { 
    int b,e,i;
    for(e=x;e<=y;e++)
    {
        i=1;
        do{
        i++;
        b=e%i;
        if(e==i)
        printf(" %d",e);
        }while(b!=0);
    }
}