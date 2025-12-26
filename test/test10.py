'''import sys

print("hello, my name is",sys.argv[1])'''


from pyfiglet import figlet
import sys
x = input(sys.argv[1])
print(figlet.renderText(f"hello, my name is {x}"))