// WAP to identify largets and samllest element of an Array given by user
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
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Smallest is: %d \nLargest is: %d", smallest, largest);
}