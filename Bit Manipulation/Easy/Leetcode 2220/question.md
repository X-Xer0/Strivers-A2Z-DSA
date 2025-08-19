# 2220. [Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/)

A **bit flip** of a number `x` is choosing a bit in the binary representation of `x` and flipping it from either **0 to 1** or **1 to 0**.  

For example, for `x = 7`, the binary representation is `111` and we may choose any bit (including leading zeros not shown) and flip it:  
- Flip the first bit from the right: `111 → 110`  
- Flip the second bit from the right: `111 → 101`  
- Flip the fifth bit from the right (a leading zero): `00111 → 10111`  

Given two integers `start` and `goal`, return the **minimum number of bit flips** to convert `start` to `goal`.  

---

## Example 1:

**Input:**  
start = 10, goal = 7  

**Output:**  
3  

**Explanation:**  
Binary of 10 = `1010`  
Binary of 7 = `0111`  

We can convert 10 → 7 in 3 steps:  
- Flip the 1st bit from the right: `1010 → 1011`  
- Flip the 3rd bit from the right: `1011 → 1111`  
- Flip the 4th bit from the right: `1111 → 0111`  

Hence, we return **3**.  

---

## Example 2:

**Input:**  
start = 3, goal = 4  

**Output:**  
3  

**Explanation:**  
Binary of 3 = `011`  
Binary of 4 = `100`  

We can convert 3 → 4 in 3 steps:  
- Flip the 1st bit from the right: `011 → 010`  
- Flip the 2nd bit from the right: `010 → 000`  
- Flip the 3rd bit from the right: `000 → 100`  

Hence, we return **3**.  

---

## Constraints:

- 0 <= start, goal <= 10⁹  

---

**Note:**  
This question is the same as **461. Hamming Distance**.  

