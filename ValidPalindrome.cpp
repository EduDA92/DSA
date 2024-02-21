// https://leetcode.com/problems/valid-palindrome/
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        
        //Create a copy of the string without spaces and special characters
        std::string formattedString = "";

        for(int i = 0; i < s.length(); i++){

            if(isalnum(s[i])){
                formattedString += tolower(s[i]);
            } 

        }

        // Use two pointer to check for the palindrome
        int n = 0;
        int j = formattedString.length() - 1;
        bool palindrome = true;

        while( n < j) {

         if(tolower(formattedString[n]) != tolower(formattedString[j])) return false;   
         n++;
         j--;

        }

        return true;
        
    }
};