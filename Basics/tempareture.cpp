#include <iostream>

int main()
{
    int Fahrenheit;
    float Centigrade;

    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> Fahrenheit;

    Centigrade = ((Fahrenheit - 32) * 5) / 9;

    std::cout << "Centigrade temperature is: " << Centigrade << std::endl;

    return 0;
}
