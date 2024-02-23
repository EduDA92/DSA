#include <vector>
#include <map>

// https://leetcode.com/problems/two-sum/

/* time complexity O(n * log n), space complexity O(n)*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        // <Number, position>
        std::map<int, int> hashMap;

        // create hashMap
       for(int i = 0; i < nums.size(); i++){
            hashMap[nums[i]] = i;
       }

       for(int i = 0; i < nums.size(); i++){

            int numberToSearch = target - nums[i];

            /* Check if the number exist in the hashmap and if so also check if the position of the found number
            is different than the actual number position because same element can't be used twice */
            if(hashMap.find(numberToSearch) != hashMap.end() && hashMap[numberToSearch] != i){
                return {i, hashMap[numberToSearch]};
            }

       }
        
        return {0,0};

    }
};