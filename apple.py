'''def main():

   x = get_on("what is x:")
   print(f"x is {x}")
     



def get_on(promate):
   while True:
       try:
          return int(input(promate))
       except ValueError:
          print("the x is not integer")
      


main()'''


try:
   y = int(input("what is x:"))

   x = {
    'a':10,
    'b':12,
    'c':13,
    'd':24
     }

   if y in x and y>20 :
      print("x is greater then 20")
   else:
       print("x is less than 20")
except ValueError:
   print("enter the integer value for x")














