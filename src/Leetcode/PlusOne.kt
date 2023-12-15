package Leetcode
/*66. Plus One
https://leetcode.com/problems/plus-one/ */

fun plusOne(digits: IntArray): IntArray {

    for (i in (digits.size - 1) downTo 0) {

        if (digits[i] < 9) {
            digits[i] += 1
            return digits
        } else {
            digits[i] = 0
        }

    }

    val newArray = IntArray(digits.size + 1)
    newArray[0] = 1

    return newArray


}

