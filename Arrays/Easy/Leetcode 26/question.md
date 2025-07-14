# [Leetcode 26: Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

---

## 📘 Description

Given an integer array `nums` **sorted in non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.  
Then return the number of unique elements in `nums`.

> 🧠 You must do this **in-place** with **O(1)** extra memory.

Consider the number of unique elements of `nums` to be `k`. To get accepted, you need to do the following:

- Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the **initial order**.
- The remaining elements beyond the first `k` are not important.
- Return `k`.

> ✅ Custom Judge:
> ```java
> int[] nums = [...]; // Input array  
> int[] expectedNums = [...]; // Expected answer  
>
> int k = removeDuplicates(nums);  
> assert k == expectedNums.length;  
> for (int i = 0; i < k; i++) {  
>     assert nums[i] == expectedNums[i];  
> }
> ```

If all assertions pass, then your solution will be accepted.

---

## 🧪 Examples

### Example 1:
Input: `nums = [1,1,2]`  
Output: `2`, `nums = [1,2,_]`  
Explanation: Function returns `k = 2`, with first two elements as `1` and `2`.  
Elements after `k` are irrelevant (`_` denotes "don’t care").

---

### Example 2:
Input: `nums = [0,0,1,1,1,2,2,3,3,4]`  
Output: `5`, `nums = [0,1,2,3,4,_,_,_,_,_]`  
Explanation: Function returns `k = 5`, with first five elements `0,1,2,3,4`.  
Rest can be any value.

---

## 🧾 Constraints

- `1 <= nums.length <= 3 * 10⁴`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

---

