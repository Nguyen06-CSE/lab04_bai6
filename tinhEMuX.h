#include <iostream>
#include <cmath> 
#include <conio.h>

using namespace std;


double tinh_e_mu_x(double x) {
    int epsilon = pow(10, -5);
    double sum = 1.0;
    double term = 1.0;
    int n = 1;
    while (fabs(term) > epsilon) { 
        term *= x / n;
        sum += term;
        n++;
    }
    return sum;
}