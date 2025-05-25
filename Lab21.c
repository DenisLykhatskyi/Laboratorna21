#include <stdio.h>

struct PolynomialParams {
    double a;
    double b;
    double c;
    double x;
};

double calculate_polynomial_value(struct PolynomialParams params) {
    return params.a * params.x * params.x + params.b * params.x + params.c;
}

int main() {
    struct PolynomialParams poly1;
    poly1.a = 2.0;
    poly1.b = 3.0;
    poly1.c = 1.0;
    poly1.x = 2.0;

    double result1 = calculate_polynomial_value(poly1);
    printf("%f\n", result1);

    struct PolynomialParams poly2;
    poly2.a = 1.0;
    poly2.b = -5.0;
    poly2.c = 6.0;
    poly2.x = 3.0;

    double result2 = calculate_polynomial_value(poly2);
    printf("%f\n", result2);

    return 0;
}