//Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    for (i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}