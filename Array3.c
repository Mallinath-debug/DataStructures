#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int ilength)
{
    int i=0;
    
    for(i=0;i<ilength;i++)
    {
        if((arr[i]%2)==0 && (arr[i]%5)==0)
        {
            printf("%d\n",arr[i]);
        }
    }
}


int main()
{
    int isize=0;
    int icnt=0;
    int *p=NULL;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    p=(int*)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to locate the memory\n");
        return -1;
    }
    
    printf("Enter the %d element\n",isize);
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the element::%d\n",icnt+1);
        scanf("%d",&p[icnt]);
    }
    
    Display(p,isize);
    
    free(p);
    
    return 0;
}
