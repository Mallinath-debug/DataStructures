#include<stdio.h>
#include<stdlib.h>

int Maximum(int arr[],int ilength)
{
    int imax=arr[0];
    int i=0;
    int iproduct=1;
    
    for(i=0;i<ilength;i++)
    {
        if(arr[i]>imax)
        {
           imax=arr[i];
        }
    }
    return imax;
}

int main()
{
    int isize=0;
    int iret=0;
    int icnt=0;
    int*p=NULL;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
   
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
    
   iret=Maximum(p,isize);
   printf("%d\n",iret);
    
    free(p);
    
    return 0;
}
