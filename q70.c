//Rotate an array to the right by k positions.#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int k;
    int i;
    int j;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 1; i <= k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Array after rotation: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}