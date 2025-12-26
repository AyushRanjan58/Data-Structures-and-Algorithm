while True:
    x = input("Enter a positive number: ")

    try:
        x = int(x)
        if x > 0:
            print("Thank you!")
            break   # Exit loop if input is valid
        else:
            print("Number must be positive.")
    except ValueError:
        print("That's not a valid number.")