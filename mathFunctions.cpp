#include <iostream>
#include <cmath>

int main() {

    double x = 2.0;
    double y = 3.0;
    double power = pow(x, y);
    std::cout << x << " raised to the power of " << y << " is " << power << std::endl;
    double max = fmax(x, y);
    double min = fmin(x, y);
    std::cout << "The maximum of " << x << " and " << y << " is " << max << std::endl;
    std::cout << "The minimum of " << x << " and " << y << " is " << min << std::endl;
    double absolute = fabs(-10.0);
    std::cout << "The absolute value of -10 is " << absolute << std::endl;
    double ceiling = ceil(25.6);
    double floorValue = floor(25.6);
    std::cout << "The ceiling of 25.6 is " << ceiling << std::endl;
    std::cout << "The floor of 25.6 is " << floor << std::endl;
    double roundedValue = std::round(25.6);
    std::cout << "The round of 25.6 is " << round << std::endl;
    double remainder = fmod(10.5, 3.2);
    std::cout << "The remainder of 10.5 divided by 3.2 is " << remainder << std::endl;
    double squareroot = sqrt(25.0);
    std::cout << "The square root of 25 is " << squareroot << std::endl;
    double cuberoot = cbrt(27.0);
    std::cout << "The cube root of 27 is " << cuberoot << std::endl;
    double exponent = exp(1.0);
    std::cout << "The exponent of 1 is " << exponent << std::endl;
    double logarithm = log(2.71828);
    std::cout << "The natural logarithm of 2.71828 is " << logarithm << std::endl;
    double logarithm10 = log10(100.0);
    std::cout << "The base-10 logarithm of 100 is " << logarithm10 << std::endl;
    double sine = sin(3.14159 / 2);
    std::cout << "The sine of 90 degrees is " << sine << std::endl;
    double cosine = cos(3.14159);
    std::cout << "The cosine of 180 degrees is " << cosine << std::endl;
    double tangent = tan(3.14159 / 4);
    std::cout << "The tangent of 45 degrees is " << tangent << std::endl;
    double arcsine = asin(1.0);
    std::cout << "The arcsine of 1 is " << arcsine << std::endl;
    double arccosine = acos(1.0);
    std::cout << "The arccosine of 1 is " << arccosine << std::endl;
    double arctangent = atan(1.0);
    std::cout << "The arctangent of 1 is " << arctangent << std::endl;
    double hyperbolicSine = sinh(1.0);
    std::cout << "The hyperbolic sine of 1 is " << hyperbolicSine << std::endl;
    double hyperbolicCosine = cosh(1.0);
    std::cout << "The hyperbolic cosine of 1 is " << hyperbolicCosine << std::endl;
    double hyperbolicTangent = tanh(1.0);
    std::cout << "The hyperbolic tangent of 1 is " << hyperbolicTangent << std::endl;

    return 0;
}