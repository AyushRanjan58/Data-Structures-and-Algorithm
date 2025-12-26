import emoji
x = input("Input->")
y,z = x.split()
if '_' in z:
      print(emoji.emojize(f'python is :{z}:'))
else:
      print(emoji.emojize(f'python is :{z}:',language='alias'))