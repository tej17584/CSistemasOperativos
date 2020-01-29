#include <stdio.h>

int main(int argc, char const *argv[])
{
    double castillo;
    double grandTotal;

    //Si multiplico un double por un int y lo guardo en un int, este lo trunca
    grandTotal = 500.50;
    castillo = 10.5;
    printf("castillo=%.2f\n", castillo);
    castillo = 100.25;
    printf("castillo 2=%.2f\n", castillo);
    printf("grand total=%.2f\n", grandTotal);
    return 0;
}
