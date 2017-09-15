#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char array_size=201,x,n;
    printf("Enter array size(max: 200):\n");
    do scanf("%d",&array_size);
    while(array_size > 200);
    int arr1[array_size];
    for(x=1; x <= array_size; x++)
    {
        printf("Enter array[%d",x);
        printf("]:\n");
        scanf("%d",&arr1[x]);
    }
    printf("Original array: [");
    for(x=1; x <= array_size; x++)
    {
        printf(" %d",arr1[x]);
    }
    printf("]\n");
    for(n=1; n <= array_size; n++)
        for(x=1; x <= array_size-1; x++)
        {
            if(arr1[x]>arr1[x+1])
            {
                arr1[x]=arr1[x]+arr1[x+1];
                arr1[x+1]=arr1[x]-arr1[x+1];
                arr1[x]=arr1[x]-arr1[x+1];
            }
        }
    printf("Sorted array: [");
    for(x=1; x <= array_size; x++)
    {
        printf(" %d",arr1[x]);
    }
    printf("]\n");
    n=0;
    for(x=1; x <= array_size-1; x++)
        if (arr1[x]==arr1[x+1]) n++;
    int arr2[array_size-n];
    arr2[1]=arr1[1];
    n=2;
    for (x=2; x <= array_size; x++)
        if (arr1[x]!=arr1[x-1])
        {
            arr2[n]=arr1[x];
            n++;
        }
    printf("Final array: [");
    for(x=1; x <= sizeof(arr2)/sizeof(int); x++)
    {
        printf(" %d",arr2[x]);
    }
    printf("]\n");
    printf("3-rd min element: ");
    if ((sizeof(arr2)/sizeof(int))>=3)
        printf("%d\n",arr2[3]);
    else printf("not exist!\n");
    printf("4-th max element: ");
    if ((sizeof(arr2)/sizeof(int))>=4)
        printf("%d\n",arr2[sizeof(arr2)/sizeof(int)-3]);
    else printf("not exist!\n");
    return 0;
}
