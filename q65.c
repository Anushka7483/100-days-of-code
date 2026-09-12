//Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int search;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == search)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (search > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found");
    }

    return 0;
}