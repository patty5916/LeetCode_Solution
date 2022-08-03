# Longest Substring Without Repeating Characters
## Question
Given a string `s`, find the length of the **longest substring** without repeating characters.


### Example 1
> **Input:** s = "abcabcbb"  
> **Output:** 3  
> **Explanation:** The answer is "abc", with the length of 3.


### Example 2
> **Input:** s = "bbbbb"  
> **Output:** 1  
> **Explanation:** The answer is "b", with the length of 1. 


### Example 3
> **Input:** s = "pwwkew"  
> **Output:** 3  
> **Explanation:** The answer is "wke", with the length of 3.  
Notice taht the answer must be a substring, "pwke" is a subsequence and not a substring.


### Constraints
- 0 <= s.length <= 5 * 10<sup>4</sup>
- `s` consists of English letters, digits, symbols and spaces.


## Solution
We scan one character in `s` at a time, and confirm whether it appears in `temp` (a string of length 0).   
If it does not appear, add it to the end of `temp`.   
If it does appear, compare the current length of `temp` with the value of `length` (the length of the longest substring). If the length of `temp` is greater than the value of `length`, the value of `length` is changed to the length of `temp`. And we change `temp` to start with the character after the repeated character and add the repeated character to the end.  
Until all the characters in `s` have been scanned once, we compare whether the length of `temp` is greater than the value of `length` and need to be replaced, and finally output `length`.
- Time complexity: O(n)

|  Language  |  Runtime  |  Memory  |
|  :---:  |  :---:  |  :---:  |
|  Python  |  78 ms  |  14.1 MB  |