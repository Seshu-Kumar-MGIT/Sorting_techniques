
#include <stdio.h>
#define n 10

void BubbleSort(int a[n],int size)
{
int i,j,flag;

for(i=0;i<size-1;i++)
{
    int temp;
    flag=0;
    for(j=0;j<size-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0)
    break;
}
}

void SelectionSort(int b[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}

int main()
{
    int arr[n],size,i,ch;
    
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements into the array to be sorted:\n");
    
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("1.Bubble_Sort\n 2.Selection Sort\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1: BubbleSort(arr,size);
                break;
        case 2: SelectionSort(arr,size);
                break;
    }
    printf("Array elements after sorted:\n");
    for(i=0;i<size;i++)
    printf("%d\t",arr[i]);
    return 0;
}
