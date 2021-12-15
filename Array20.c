///////////////////////////////////////////////////////////////////////
/////
/////
/////              TO FIND SECOND LARGEST ELEMENT IN ARRAY
/////
/////
//////////////////////////////////////////////////////////////////////////



#include<stdio.h>
//#include<limits.h>


int main()
{
    int isize=0;
    int arr[100];
    int i=0;
    int max1=0;
    int max2=0;
    int icnt=0;
    
    printf("Enter the size of array\n");
    scanf("%d",&isize);
    
    printf("Enter the %d elements\n",isize);
    
    
    //max1=max2=INT_MIN;
    
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter the %d element\n",icnt+1);
        scanf("%d",&arr[icnt]);
    }
    
    for(i=0;i<isize;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    printf("Largest element in array is %d\n",max1);
    printf("Second Largest elementin array is %d\n",max2);
    
    return 0;
    
}
