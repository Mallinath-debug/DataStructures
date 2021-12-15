#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int arr[],int ilength)
{
    int i=0;

    for(i=0;i<ilength;i++)
    {
        if((arr[i])==11)
        {
            return true;
        }

    }
    return false;
}



int main()
{
    int isize=0;
    int icnt=0;
    int*p=NULL;
    bool bret=false;
    
    printf("Enter the size of the array\n");
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
        printf("Enter the element  %d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    bret=Check(p,isize);
    
    if(bret==true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    
    free(p);
    
    
    return 0;
}
