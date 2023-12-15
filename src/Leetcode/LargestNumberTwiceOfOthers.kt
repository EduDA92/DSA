package Leetcode

/* 747. Largest Number At Least Twice of Others
* https://leetcode.com/problems/largest-number-at-least-twice-of-others/ */

fun dominantIndex(nums: IntArray): Int {

    val max = nums.max()

    for (i in nums) {

        if (i != max && i.times(2) > max) return -1

    }

    return nums.indexOf(max)
}

