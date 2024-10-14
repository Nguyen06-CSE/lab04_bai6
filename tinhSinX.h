
#include <iostream>
#include <cmath> 
#include <conio.h>

using namespace std;


double tinh_sin_x(double x) {
    int epsilon = pow(10, -5);
    double sum = x; 
    double term = x;
    int n = 1;
    while (fabs(term) > epsilon) { 
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}