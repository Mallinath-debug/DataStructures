#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[],int ilength,int ino)
{
    int i=0;
    int n=ino;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i])==n)
        {
            return i;
        }
    }
    return i;
}

int main()
{
    int isize=0;
    int icnt=0;
    int ivalue=0;
    int iret=0;
    int*p=NULL;
    
    printf("Enter the size of the array\n");
    scanf("%d",&isize);
    
    printf("Enter the value\n");
    scanf("%d",&ivalue);
    
    p=(int*)malloc(isize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to locate memory\n");
        return -1;
    }
    
    printf("Enter the %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the element  %d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    iret=FirstOcc(p,isize,ivalue);
    
    if(iret==-1)
    {
        printf("There is no such member\n");
    }
    else
    {
        printf("First occurence of number is %d\n",iret);
    }
    
    
    free(p);
    
    return 0;
}
