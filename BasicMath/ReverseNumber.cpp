#include<iostream>
#include <cmath>


class ReverseInteger{
    public:
        int reverse(int x){
            
            long reverseNumber = 0;
        
            while(x != 0){
                
                reverseNumber = reverseNumber * 10 + x % 10;
                x = x / 10;
                
            }
            
            if(reverseNumber > pow(2, 31) - 1 || reverseNumber < - pow(2, 31)) return 0;

            return reverseNumber;

        }
};