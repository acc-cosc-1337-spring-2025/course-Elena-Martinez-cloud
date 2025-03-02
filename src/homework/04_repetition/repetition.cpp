//add include statements
#include "repetition.h"

//add function(s) code here

int factorial(int num) {
    int product = 1;
    while (num > 0){
        product *= num;
        num--;
    }
    return product;
}

int gcd(int num1, int num2){
    while (num1 != num2){
        if (num1 < num2){
            num2 -= num1;
        } else{
            num1 -= num2;
        }
    }
    return num1;
}