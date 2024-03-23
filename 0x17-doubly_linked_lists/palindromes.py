#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]
largest_palindrome = 0
# Start from the largest possible product and work downwards
for i in range(999, 99, -1):
    # Start from i to avoid redundant checks
    for j in range(i, 99, -1):
        product = i * j
        if product <= largest_palindrome:
            break  # No need to continue inner loop if product is smaller
        if is_palindrome(product):
            largest_palindrome = product
print(largest_palindrome)
