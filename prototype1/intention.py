a = [
    "ranjan",
    "ayush"
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
    ]
while True:
  date_entered = input("Date:")
  required = ","
  date_entered = date_entered.replace("/"," ")
  x,y,z = date_entered.split()
  x = x.title()
  y = y.replace(",","")

  try:

             if required in date_entered and x in a and 0<int(y)<=30:
                       position = str(a.index(x))
                       y = y.zfill(2)
                       position = position.zfill(2)
                       print(f"{z}-{position}-{y}")
                       break
             else:
                 x,y,z = date_entered.split()
                 if 0<int(x)<=12 and 0<int(y)<=30:
                          x = x.zfill(2)
                          y = y.zfill(2)
                          print(f"{z}-{x}-{y}")
                          break
  except ValueError:
        print("enter the valid entry")