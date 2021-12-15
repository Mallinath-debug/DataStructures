#include<stdio.h>
#include<stdlib.h>


void Display(int arr[],int ilength)
{
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i]%5)==0)
        {
            printf("%d\n",arr[i]);
        }
    }
}

int main()
{
    int isize=0;
    int*p=NULL;
    int iret=0;
    int icnt=0;
    
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    p=(int*)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Not able to locate the memroy\n");
        return -1;
    }
    
    printf("Enter %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element::%d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    Display(p,isize);
    
    return 0;
}
