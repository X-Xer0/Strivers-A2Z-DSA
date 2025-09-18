# [1011. Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/)

## Problem
A conveyor belt has packages that must be shipped from one port to another within `days` days.

The `i-th` package has a weight of `weights[i]`. Each day, we must load the ship with packages **in order**, without exceeding the maximum ship capacity.

Return the **least weight capacity** of the ship that allows all packages to be shipped within `days`.

---

## Examples

### Example 1
**Input:**  
`weights = [1,2,3,4,5,6,7,8,9,10], days = 5`  
**Output:**  
`15`

**Explanation:**  
- Capacity = 15 → valid shipping plan:  
  - Day 1: [1,2,3,4,5]  
  - Day 2: [6,7]  
  - Day 3: [8]  
  - Day 4: [9]  
  - Day 5: [10]  
- Capacity = 14 would fail, since order must be preserved.

---

### Example 2
**Input:**  
`weights = [3,2,2,4,1,4], days = 3`  
**Output:**  
`6`

**Explanation:**  
- Capacity = 6 → valid shipping plan:  
  - Day 1: [3,2]  
  - Day 2: [2,4]  
  - Day 3: [1,4]  

---

### Example 3
**Input:**  
`weights = [1,2,3,1,1], days = 4`  
**Output:**  
`3`

**Explanation:**  
- Day 1: [1]  
- Day 2: [2]  
- Day 3: [3]  
- Day 4: [1,1]  

---

## Constraints
- `1 <= days <= weights.length <= 5 * 10^4`  
- `1 <= weights[i] <= 500`