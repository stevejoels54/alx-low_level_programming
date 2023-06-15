#!/usr/bin/python3
def is_palindrome(num):
    # Convert the number to a string and check if it is equal to its reverse
    return str(num) == str(num)[::-1]

largest_palindrome = 0

# Iterate through all possible products of two 3-digit numbers
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j

        # Check if the product is a palindrome and larger than the current largest palindrome
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the largest palindrome in the file "102-result"
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
