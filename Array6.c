#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[],int ilength)
{
    int icnt1=0;
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i]%2)==0)
        {
            icnt1++;
        }
    }
    return icnt1++;
    
}


int main()
{
    int isize=0;
    int icnt=0;
    int*p=NULL;
    int iret=0;
    
    
    printf("Enter the size of the array\n");
    scanf("%d",&isize);
    
    p=(int*)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to locate the memory\n");
        return -1;
    }
    
    printf("Enter %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the element %d::",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    iret=CountEven(p,isize);
    printf("Count of even number is %d\n",iret);
    
    free(p);
    
    
    return 0;
}
