# Two Sum
## Question
Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have **_eactly one solution_**, and you may not use the same element twice.

You can return the answer in any order.


### Example 1
> **Input:** nums = [2, 7, 11, 15], target = 9  
> **Output:** [0, 1]  
> **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].


### Example 2
> **Input:** nums = [3, 2, 4], target = 6  
> **Output:** [1, 2]  


### Example 3
> **Input:** nums = [3, 3], target = 6  
> **Output:** [0, 1]  


### Constraints
- 2 <= nums.length <= 10<sup>4</sup>
- -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>
- -10<sup>9</sup> <= target <= 10<sup>9</sup>


## Solution
### Brute Force
Use a nested loop to iterate through each result until we find the `target`.
- Time complexity: O(n<sup>2</sup>)  

|  Language  |  Runtime  |  Memory  |
|  :---:  |  :---:  |  :---:  |
|  C  |  194 ms  |  6.2 MB  |
|  Python|  6296 ms  |  15 MB  |



### Hash or Dictionary
Check from the map each time whether the `target` is in the map. If found, we can get the result. If not found, put a set of (`num`, `index`) into map. 
- Time complexity: O(n)

|  Language  |  Runtime  |  Memory  |
|  :---:  |  :---:  |  :---:  |
|  C  |  201 ms  |  65.3 MB  |
|  Python|  99 ms  |  15.3 MB  |