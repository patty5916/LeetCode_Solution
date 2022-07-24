# Add Two Numbers
## Question
You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.


### Example 1
> **Input:** l1 = [2, 4, 3], l2 = [5, 6, 4]  
> **Output:** [7, 0, 8]  
> **Explanation:** 342 + 465 = 807.


### Example 2
> **Input:** l1 = [0], l2 = [0]  
> **Output:** [0]  


### Example 3
> **Input:** l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]  
> **Output:** [8, 9, 9, 9, 0, 0, 0, 1]  


### Constraints
- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.


## Solution
Create a singly-linked list, `curr` represents the current position, and is also where the next node is added. `val` represents the value of the addition of two numbers, take the one digit as the value of the newly added node, and retain the ten digit to add to the value of the next node.
- Time complexity: O(n)

|  Language  |  Runtime  |  Memory  |
|  :---:  |  :---:  |  :---:  |
|  Python  |  97 ms  |  14 MB  |