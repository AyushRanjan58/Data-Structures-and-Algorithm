from pyfiglet import Figlet
import sys
x = sys.argv[1]
figlet = Figlet(font = {x})
print(f.renderText('text to render'))