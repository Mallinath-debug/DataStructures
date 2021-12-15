#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int ilength)
{
    int idiffer=0;
  //  int icnt=0;
    int isum1=0;
    int isum2=0;
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i]%2)==0)
        {
            isum1=isum1+arr[i];
        }
        else
        {
            isum2=isum2+arr[i];
        }
        if(isum1>isum2)
        {
            idiffer=isum1-isum2;
        }
        else
        {
            idiffer=isum2-isum1;
        }
      
    }
      return idiffer;
}
    
    /*for(icnt=0;icnt<ilength;icnt++)
    {
        if((icnt[arr]%2)==0)
        {
            isum1=isum1+icnt[arr];
        }
        else
        {
            isum2=isum2+icnt[arr];
        }
        if(isum1>isum2)
        {
            idiffer=isum1-isum2;
        }
        else
        {
            idiffer=isum2-isum1;
        }
    }
    return idiffer;
}*/

int main()
{
    int isize=0;
    int icnt=0;
    int iret=0;
    int *p=NULL;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    p=(int*)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to locate the memory");
        return -1;
    }
    
    printf("Enter %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter %d elements\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    iret=Difference(p,isize);
    printf("Result is %d : ",iret);
    
    free(p);
    
    return 0;
}
