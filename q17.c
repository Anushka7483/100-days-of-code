//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f", root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("Root1 = Root2 = %.2f", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Two complex roots\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi", realPart, imaginaryPart);
    }

    return 0;
}