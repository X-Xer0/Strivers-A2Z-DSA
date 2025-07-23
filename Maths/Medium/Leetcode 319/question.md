# [Leetcode 319: Bulb Switcher](https://leetcode.com/problems/bulb-switcher/description/)

---

## 📘 Description

There are `n` bulbs that are initially **off**.  

You perform the following operation `n` times:

- In the 1st round, you turn on every bulb.
- In the 2nd round, you toggle every second bulb.
- In the 3rd round, you toggle every third bulb.
- ...
- In the `i`th round, you toggle every `i`th bulb.
- ...
- In the `n`th round, you only toggle the `n`th bulb.

Return the number of bulbs that remain **on** after `n` rounds.

---

## 🧪 Examples

### Example 1:
Input:  
`n = 3`  
Output:  
`1`  
Explanation:  
Initial: `[off, off, off]`  
Round 1: `[on, on, on]`  
Round 2: `[on, off, on]`  
Round 3: `[on, off, off]`  
Only bulb 1 remains on.

---

### Example 2:
Input:  
`n = 0`  
Output:  
`0`

---

### Example 3:
Input:  
`n = 1`  
Output:  
`1`

---

## 🧾 Constraints

- `0 <= n <= 10⁹`

---

> 💡 **Insight**:  
> A bulb ends up **on** only if it's toggled **odd number of times** → this happens when it has **odd number of divisors** → which is true only for **perfect squares**!  
> So, the answer is simply the count of perfect squares ≤ `n`:  
> `floor(sqrt(n))`

