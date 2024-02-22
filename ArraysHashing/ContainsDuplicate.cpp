#include<iostream>
#include <vector>
#include <map>

// https://leetcode.com/problems/contains-duplicate/description/

/* Hashing problem, O(n) complexity, O(n) space complexity */

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
            
            std::map<int, int> hashMap;

            for(int i = 0; i < nums.size(); i++){
                
                // check if the current number already has a coincidence
                if(hashMap[nums[i]] > 0) return true;

                hashMap[nums[i]]++;
                

            }

            return false;
        
    }
};
