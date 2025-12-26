import emoji
x = input("Input->")
if ',' in x:

      print(emoji.emojize(f'python is :{x}:',language='alias'))

elif '_' in x:
          print(emoji.emojize(f'python is :{x}:',variant="emoji_type"))
else:
          print(emoji.emojize(f'python is :{x}:',language='alias',variant="emoji_type"))