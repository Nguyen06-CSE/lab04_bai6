#include <iostream>
#include <cmath> 
#include <conio.h>

using namespace std;


#include"tinhCosX.h"
#include"tinhSinX.h"
#include"tinhEMuX.h"

int main() {
    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;

   
    cout << "e^" << x << " = " << tinh_e_mu_x(x) << endl;

  
    cout << "sin(" << x << ") = " << tinh_sin_x(x) << endl;

    
    cout << "cos(" << x << ") = " << tinh_cos_x(x) << endl;

    getch(); 
    return 0;
}
