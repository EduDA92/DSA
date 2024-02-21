#include <cmath>
#include<iostream>

bool checkArmstrong(int n){

    int digits = 0;
    int number = n;
    int total = 0;
	// first count the digits of the number

    while(number != 0){
        digits++;
        number = number / 10;
    }

    // Reasign the number again
    number = n;
    while(number != 0){
        
        total += pow(number % 10, digits);
        number = number / 10;
    }

    return total == n;

}