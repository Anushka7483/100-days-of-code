//Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int i;
    int largest;
    int secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}