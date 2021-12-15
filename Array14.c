#include<stdio.h>
#include<stdlib.h>

void Range(int arr[],int ilength,int istart,int iend)
{
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if(arr[i]>istart && arr[i]<iend)
        {
            printf("%d\t",arr[i]);
        }
    }
    
}

int main()
{
    int isize=0;
    int ivalue1=0;
    int ivalue2=0;
    int icnt=0;
    int*p=NULL;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    printf("Enter the starting point\n");
    scanf("%d",&ivalue1);
    
    printf("Enter the ending point\n");
    scanf("%d",&ivalue2);
    
    p=(int*)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to locate the memory\n");
        return -1;
    }
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the element  %d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    Range(p,isize,ivalue1,ivalue2);
    
    free(p);
    
    return 0;
}
