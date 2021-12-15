#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int length,int ino)
{
    int i=0;
    int icnt1=0;
    
    for(i=0;i<length;i++)
    {
        if((arr[i])==ino)
        {
            icnt1++;
        }
    }
    return icnt1;
    
}



int main()
{
    int isize=0;
    int*p=NULL;
    int ivalue=0;
    int icnt=0;
    int iret=0;
    
    printf("Enter the size of the array\n");
    scanf("%d",&isize);
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    
    p=(int*)malloc(isize*sizeof(malloc));
    
    if(p==NULL)
    {
        printf("Unable to locate the memroy\n");
        return -1;
    }
    
    printf("Enter %d elements\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the elements %d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    iret=Frequency(p,isize,ivalue);
    
    printf("%d\n",iret);
    
    free(p);
    
    return 0;
}
