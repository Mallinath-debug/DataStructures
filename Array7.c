#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int ilength)
{
    int i=0;
    int icnt1=0;
    int icnt2=0;
    int idiffer=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i]%2)==0)
        {
            icnt1++;
        }
        else
        {
            icnt2++;
        }
        if(icnt1>icnt2)
        {
            idiffer=icnt1-icnt2;
        }
        else
        {
            idiffer=icnt2-icnt1;
        }
    }
    return idiffer;
}


int main()
{
    int isize=0;
    int icnt=0;
    int*p=NULL;
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
        printf("Enter the element  %d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    iret=Frequency(p,isize);
    
    printf("Frequency is  %d\n",iret);
    
    
    
    return 0;
}
