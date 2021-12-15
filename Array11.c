#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int arr[],int ilength,int ino)
{
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if(arr[i]==ino)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int isize=0;
    int ivalue=0;
    int *p=NULL;
    int icnt=0;
    bool bret=false;
    
    
    printf("Enter the size of Array\n");
    scanf("%d",&isize);
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    
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
    
    bret=Check(p,isize,ivalue);
    
    if(bret==true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    free(p);
    
    return 0;
}
