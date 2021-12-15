#include<stdio.h>
#include<stdlib.h>

int Count(int arr[],int ilength)
{
    int i=0;
    int icnt1=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i])==11)
        {
            icnt1++;
        }
    }
    return icnt1++;
}


int main()
{
    int isize=0;
    int*p=NULL;
    int icnt=0;
    int iret=0;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    p=(int*)malloc(isize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to locate the memory\n");
        return -1;
    }
    
    printf("Enter the %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the element %d  ",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    iret=Count(p,isize);
    printf("%d\n",iret);
    
    free(p);
    
    return 0;
}
