#include <stdio.h>
void bubblesort(int arr[],int size );
int binarysearch(int array[],int x,int,int);

int main()
{
   // int array[100];  //
for (int i=0;i<=sizeof(array);++i)
{
    printf("enter elment");
    scanf("%d",&array[i]);
}
    void bubblesort(array,size );
int n=sizeof(array)/sizeof(array[0]);
int x;
printf("enter number to scan");
scanf("%d",&x);
int res=binarysearch(int array, x,0,n-1);
 if (res==-1)
 {
     printf("not found");
 } else
 printf("element is found at index %d",res);
 return 0



}
void bubblesort(int arr[],int size )
    {
         for (int step=0;step<size ;++step)
            for(int i=0 ;i<size - step;++i)
         {
             if (arr[i]>arr[i+1])
             {
                 int temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
         }
         for (int i=0;i<size;++i)
    {
        printf("%d \n",arr[i]);

    }

   int binarysearch(int array[],int x,0,n-1)
    {

        while(low<=high)
        {
        int mid=(low+high)/2);
        if (array[mid]==x)
            return mid;
        else if(array[mid]<x)
            low=mid+1;
        else
            high=mid=1;
        }
        return -1;
    }
