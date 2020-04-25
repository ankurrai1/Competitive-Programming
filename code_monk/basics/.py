# Given a non-negative number represented as an array of digits,
#
# add 1 to the number ( increment the number represented by the digits ).
#
# The digits are stored such that the most significant digit is at the head of the list.
#
# Example:
#
# If the vector has [1, 2, 3]
#
# the returned vector should be [1, 2, 4]
#
# as 123 + 1 = 124.
#
# If the vector is [9, 9, 9]
#
# it should return [1, 0, 0, 0]
#
# problem statement is as above

#input
arr = list(map(int,input().split(" ")))

#Method 1
#========
res = []
num = 0
for e in arr:
    num = num*10+e
num += 1

while num > 0:
    res.append(num%10)
    num = num // 10

print("solution method 1's ans :",res[::-1])

# Method 2
# ========
res2 = []
carry = 0
res2.append((arr[-1] + carry +1)%10)
carry = (arr[-1] + 1)//10
for i in range(len(arr)-2, -1, -1):
    res2.append((arr[i] + carry)%10)
    carry = (arr[i] +carry)//10
    
print("solution method 2's ans :",res2[::-1])
