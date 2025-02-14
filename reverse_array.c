// reverse the array                  14 feb 
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    // creating a new array 
    int ab[5];
    // code for the reverse the array
    for(int i=0;i<5;i++)
    {
        ab[i]=a[4-i];
    }
    printf("print the all elements of the 1st array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("print all elements of the 2nd array\n") ;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ab[i]);
    }
}
