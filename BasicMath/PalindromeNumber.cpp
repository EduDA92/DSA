#include<iostream>

class Solution {
public:
    bool isPalindrome(int x) {

       // if negative cant be palindrome 
       if( x < 0) return false;

        // reversed number and copy of the original
        long reversed = 0;
        int copy = x;

        // build the reversed number
        while(copy != 0){
            
            /* Build the number from the last digit to the first, each iterarion
            shrink the original number by the last digit */
            reversed = reversed * 10 + copy % 10;
            copy = copy/10;

        }
        

        return reversed == x;
        
    }
};