#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d;
    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        printf("Not able to compute complex roots \n");
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("%.2f \n", x1);
        printf("%.2f \n", x2);
    }
}

// Important thing to note, format specifiers are used in C only with printf and scanf but they are used differently.
// when using it with printf, the speciifer is in the "" then the variable is stated AFTER A COMMA eg printf("Not able to compute complex roots \n");
// but for scanf, the specifier is stated inside the "" alone and the variable is stated AFTER A COMMA AND & eg scanf("%f", &c);
