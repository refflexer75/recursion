#include <iostream>
#include <cmath>

double function(double const x, int const n) {
    return cos(n*x)/n;
}

void recursiveFindSum(double &s, double const x, int &i, int const n) {
    if(i > n) return;
    s += function(x, i++);
    recursiveFindSum(s, x, i, n);
}

int main(int argc, char *argv[])
{
    int n = 10;
    double x = 1.0471975512; // cos(pi/3) = 1/2
    double s = 0; //сумма
    int i = 1; // вложенность рекурсии
    recursiveFindSum(s, x, i, n);
    std::cout << s << std::endl;
    return 0;
}