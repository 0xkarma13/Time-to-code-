"""
Simple challenge for Unlim: bit.com
Reads a list of numbers and prints how many of them are zero.
"""

n = int(input())
numbers = list(map(int, input().split()))

zero_count = 0
for number in numbers:
    if number == 0:
        zero_count += 1

print(zero_count)
