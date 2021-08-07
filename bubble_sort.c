/*Bubble sort*/ 
#include <stdio.h>

int main()
{
    
    unsigned char a[5]= {5,9,7,11,1},i,temp,iteration;
    printf("\nBefore Sort\n");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);

    //Sorting algorithm
    for(iteration=0;iteration<((sizeof(a)/sizeof(char)))-1;iteration++)
    {
    for(i=0;i<4;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        else
        {
            continue;
        }
    }
    printf("%dst iteration level of Sort\n",iteration);
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    }
    printf("%d Final Sort\n",iteration);
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}
