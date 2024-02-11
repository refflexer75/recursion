#include <iostream>
#include <cmath>

double function(double const x, int const n) {
    return cos(n*x)/n;
}

int main(int argc, char *argv[])
{
    int n = 10;
    double x = 1.0471975512; // cos(pi/3) = 1/2
    double s = 0; //сумма
    for (int i = 1; i<=n; i++){
        s += function(x,i);
    }
    std::cout << s << std::endl;
    return 0;
}