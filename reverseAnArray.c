#include <stdio.h>
void main()
{
    int n,temp;
    printf("Enter the no. elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n/2; i++)
    {
        temp=arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}