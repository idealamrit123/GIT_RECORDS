#include <stdio.h>
#include <math.h>

int main()
{
    char ch ;
    printf("Enter The Choice : 1. QE , 2. SQ Root , 3. AOT By Herons Formula , 4. distance relationships \n");
    if (scanf("%c", &ch) != 1) {
        return 0;
    }

    switch (ch) {
        case 1: {
            double a, b, c, discriminant, root1, root2;
            printf("Enter The Value of A , B , C to find Roots\n");
            if (scanf("%lf%lf%lf", &a, &b, &c) != 3) {
                return 0;
            }
            if (a == 0) {
                printf("Not a quadratic equation.\n");
                break;
            }
            discriminant = b * b - 4 * a * c;
            if (discriminant > 0) {
                printf("REAL AND DISTINCT ROOTS EXIST\n");
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("ROOT_1 = %.3f\n", root1);
                printf("ROOT_2 = %.3f\n", root2);
            } else if (discriminant == 0) {
                root1 = -b / (2 * a);
                printf("REAL AND EQUAL ROOTS EXIST\n");
                printf("ROOT = %.3f\n", root1);
            } else {
                double real = -b / (2 * a);
                double imag = sqrt(-discriminant) / (2 * a);
                printf("COMPLEX ROOTS EXIST\n");
                printf("ROOT_1 = %.3f + %.3fi\n", real, imag);
                printf("ROOT_2 = %.3f - %.3fi\n", real, imag);
            }
            break;
        }
        case 2: {
            double n;
            printf("Enter The Number to find square root\n");
            if (scanf("%lf", &n) != 1) {
                return 0;
            }
            if (n < 0) {
                printf("Negative number, square root is complex.\n");
            } else {
                printf("Square root = %.3f\n", sqrt(n));
            }
            break;
        }
        case 3: {
            double a, b, c, s, area;
            printf("Enter the three sides of the triangle\n");
            if (scanf("%lf%lf%lf", &a, &b, &c) != 3) {
                return 0;
            }
            if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
                printf("Invalid triangle sides\n");
            } else {
                s = (a + b + c) / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
                printf("Area = %.3f\n", area);
            }
            break;
        }
        case 4: {
            double x1, y1, x2, y2, distance, midx, midy;
            printf("Enter coordinates of first point (x1 y1)\n");
            if (scanf("%lf%lf", &x1, &y1) != 2) {
                return 0;
            }
            printf("Enter coordinates of second point (x2 y2)\n");
            if (scanf("%lf%lf", &x2, &y2) != 2) {
                return 0;
            }
            distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            midx = (x1 + x2) / 2.0;
            midy = (y1 + y2) / 2.0;
            printf("Distance = %.3f\n", distance);
            printf("Midpoint = (%.3f, %.3f)\n", midx, midy);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
