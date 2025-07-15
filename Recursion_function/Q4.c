// 4.	Write	C function to evaluate the series sin(x) = x − (x 3 / 3!) + (x 5 / 5!) − (x 7 / 7!) +……… to five significant digits. 

#include <stdio.h>
#include <math.h>

double fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

double sinSeries(double x, int n) {
    double term = pow(x, 2 * n - 1) / fact(2 * n - 1);
    if (term < 0.00001) return 0;
    return (n % 2 ? 1 : -1) * term + sinSeries(x, n + 1);
}

int main() {
    double x;
    printf("Enter x in radians: ");
    scanf("%lf", &x);
    printf("sin(x) ≈ %.5lf\n", sinSeries(x, 1));
    return 0;
}
