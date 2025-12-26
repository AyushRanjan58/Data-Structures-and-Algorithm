# A tuple is like a list, but immutable (cannot be changed after creation)
fruits = ("apple", "banana", "cherry")

print(fruits)          # Output: ('apple', 'banana', 'cherry')
print(fruits[0])       # Access first element → apple
print(len(fruits))     # Number of elements → 3

# You can also have mixed data types in a tuple
person = ("Ayush", 21, "India")
print(person)

# Tuple packing and unpacking
point = (4, 5)
x, y = point   # unpacking
print("x =", x)
print("y =", y)
