#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char n=201;
    printf("Enter array size(max: 200):\n");
    do scanf("%d",&n);
    while(n > 200);
    unsigned char x,b;
    int arr[n];
    for(x=1; x <= n; x++)
    {
        printf("Enter array[%d",x);
        printf("]:\n");
        scanf("%d",&arr[x]);
    }
    printf("Original array: [");
    for(x=1; x <= n; x++)
    {
        printf(" %d",arr[x]);
    }
    printf("]\n");
    for(b=1; b <= n; b++)
        for(x=1; x <= n-1; x++)
        {
            if(arr[x]>arr[x+1])
            {
                arr[x]=arr[x]+arr[x+1];
                arr[x+1]=arr[x]-arr[x+1];
                arr[x]=arr[x]-arr[x+1];
            }
        }
    printf("Sorted array: [");
    for(x=1; x <= n; x++)
    {
        printf(" %d",arr[x]);
    }
    printf("]\n");
    unsigned char d=0;
    for(b=1; b <= n-1; b++)
        if (arr[b]==arr[b+1]) d++;
    int arr2[n-d];
    arr2[1]=arr[1];
    x=2;
    for (b=2; b <= n; b++)
        if (arr[b]!=arr[b-1])
        {
            arr2[x]=arr[b];
            x++;
        }
    printf("Final array: [");
    for(x=1; x <= n-d; x++)
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
        printf("%d\n",arr2[sizeof(arr2)/sizeof(int)]-3);
    else printf("not exist!\n");
    return 0;
}
