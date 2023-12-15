package Leetcode
/* 724. Find Pivot Index
https://leetcode.com/problems/find-pivot-index/ */

fun findMiddleIndex(nums: IntArray): Int {

    var rightSum = 0
    var leftSum = 0


    for (i in 0 until nums.size) {

        // Leftmost case
        if (i == 0) {

            leftSum = 0
            rightSum = nums.copyOfRange(1, nums.size).sum()

            if (leftSum == rightSum) return 0

        }

        // Rightmost case

        if (i == (nums.size - 1)) {
            rightSum = 0
            leftSum = nums.copyOfRange(0, (nums.size - 1)).sum()

            if (leftSum == rightSum) return (nums.size - 1)

        }

        rightSum = nums.copyOfRange(0, i).sum()
        leftSum = nums.copyOfRange((i + 1), nums.size).sum()

        if (rightSum == leftSum) return i


    }

    return -1
}

