### Tea Tray

**Problem:** A tray holds at most 9 cups. There are `n` guests, and `m` of them want two cups instead of one. Find how many times the tray has to be filled so everyone gets tea.

**Approach:** Total cups needed = `n + m`. Divide by the tray capacity (9) and round **up**, since even one leftover cup means another trip. Python's `//` rounds down, so I negate, divide, and negate again: `-(-x // 9)`. This uses integers only, so there's no precision problem with inputs up to 10¹², which `math.ceil` on a float could have.

**Code:**
```python
n, m = map(int, input().split())
print(-(-(n + m) // 9))
```

**Examples:** `5 3` → 8 cups → `1`, and `10 10` → 20 cups → `3`.
