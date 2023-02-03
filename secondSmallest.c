#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int secondSmallest = arr[1];
    for (int i = 1; i < n; i++)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] > smallest && arr[i] < secondSmallest)
            {
                secondSmallest = arr[i];
            }
        }
    }
    printf("Second Smallest is: %d", secondSmallest);
}