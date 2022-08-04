# Palindrome Number
## Question
Given an integer `x`, return `true` if `x` is palindrome integer. An integer is a **palindrome** when it reads the same backward as forward.
    - For example, `121` is a palindrome while `123` is not.


### Example 1
> **Input:** x = 121  
> **Output:** true  
> **Explanation:** 121 reads as 121 from left to right and from right to left.


### Example 2
> **Input:** x = -121  
> **Output:** false  
> **Explanation:** From left to right, it reads -121. From right to left, it becomes 121-. Therefore, it is not a palindrome. 


### Example 3
> **Input:** x = 10  
> **Output:** false   
> **Explanation:** Reads 01 from right to left. Therefore, it is not a palindrome. 


### Constraints
- -2<sup>31</sup> <= x <= 2<sup>31</sup> - 1


## Solution
### solution1
We convert the integer `x` to string, and compare whether from left to right is same with from right to left.

### solution2
If `x` is less than 0, return False directly.  
We set `forward` to read `x` from left to right (`forward` is the original `x`), and `backward` to read `x` from right to left.  
Each loop multiplies the `backward` by 10 and adds the single digit extracted from `x`, and sets the quotient of dividing `x` by 10 as the new `x`. The loop is terminated until `x` is 0.

|  Language  |  Runtime  |  Memory  |
|  :---:  |  :---:  |  :---:  |
|  Python (solution1)  |  110 ms  |  13.9 MB  |
|  Python (solution2)  |  146 ms  |  13.8 MB  |