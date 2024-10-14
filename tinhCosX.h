#include <iostream>
#include <cmath> 
#include <conio.h>

using namespace std;




double tinh_cos_x(double x) {
    int epsilon = pow(10, -5);
    double sum = 1.0; 
    double term = 1.0;
    int n = 1;
    while (fabs(term) > epsilon) { 
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}
