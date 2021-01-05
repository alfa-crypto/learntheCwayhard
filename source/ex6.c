#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 1.345;
    double super_power = 56789.4532;
    char initial = 'A';
    char fist_name[] = "alfa";
    char last_name[] = "404";

    printf("You are %d miles away.\n", distance);
    printf("You have %f level of power.\n", power);
    printf("You have %f awesome super power.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a fist_name %s.\n", fist_name);
    printf("I have a last_name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", fist_name, initial, last_name);

    return 0;

}
