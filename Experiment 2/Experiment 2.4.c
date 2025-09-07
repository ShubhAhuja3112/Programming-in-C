/*Experiment 2.4*/
/*Write a program to find the roots of the quadratic equations.*/
#include <stdio.h>
#include <math.h>

int main() 
{
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    double a, b, c, d, r1, r2, rp, ip;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n", r1);
    }
    else {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", rp, ip, rp, ip);
    }

    return 0;
}

