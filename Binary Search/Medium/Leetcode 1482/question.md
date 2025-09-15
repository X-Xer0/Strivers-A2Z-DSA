# [1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/)

You are given an integer array `bloomDay`, an integer `m` and an integer `k`.

You want to make `m` bouquets. To make a bouquet, you need to use `k` adjacent flowers from the garden.

The garden consists of `n` flowers, the `i-th` flower will bloom in the `bloomDay[i]` and then can be used in exactly one bouquet.

Return the **minimum number of days** you need to wait to be able to make `m` bouquets from the garden.  
If it is impossible to make `m` bouquets return **-1**.

---

## Example 1:

**Input:**  
bloomDay = [1,10,3,10,2], m = 3, k = 1  

**Output:**  
3  

**Explanation:**  
We need 3 bouquets, each should contain 1 flower.  

- After day 1: [x, _, _, _, _] → only 1 bouquet possible.  
- After day 2: [x, _, _, _, x] → only 2 bouquets possible.  
- After day 3: [x, _, x, _, x] → 3 bouquets possible.  

So the answer is **3**.

---

## Example 2:

**Input:**  
bloomDay = [1,10,3,10,2], m = 3, k = 2  

**Output:**  
-1  

**Explanation:**  
We need 3 bouquets, each has 2 flowers → total 6 flowers needed.  
There are only 5 flowers, so it's impossible.

---

## Example 3:

**Input:**  
bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3  

**Output:**  
12  

**Explanation:**  
We need 2 bouquets, each with 3 adjacent flowers.  

- After day 7: [x, x, x, x, _, x, x] → we can make only 1 bouquet (first 3 flowers).  
- After day 12: [x, x, x, x, x, x, x] → we can make 2 bouquets in different ways.  

So the answer is **12**.

---

## Constraints:

- `bloomDay.length == n`  
- `1 <= n <= 10^5`  
- `1 <= bloomDay[i] <= 10^9`  
- `1 <= m <= 10^6`  
- `1 <= k <= n`  
