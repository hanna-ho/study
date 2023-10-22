#include <stdio.h>
#include <stdlib.h>

float fahrenheitToCelsius(float fahrenheit)
{
    float celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    return celsius;
}

int main()
{
    float fahrenheit = 1200.0;
    float celsius = fahrenheitToCelsius(fahrenheit);

    printf("The temperature in Celsius is: %f\n", celsius);

    return 0;
}
