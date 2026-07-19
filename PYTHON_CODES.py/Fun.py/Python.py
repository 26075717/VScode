print("\n\tThis is Korede's Student Info Formatter for FNB Practical Task\n ")


name = input("Enter your name: ").upper().title()

surname = input("Enter your surname: ").upper().title()

Full_name = (surname+' '+name)

print(f"Welcome "+Full_name)

age = int(input("\nEnter your age: "))
print(age)
    

Favourite_number = float(input("\nEnter your favourite number: " ))

print(Favourite_number)

print(type(name))
print(type(surname))
print(type(age))
print(type(Favourite_number))

str(age)
str(Favourite_number)

print(f"Welcome "+Full_name+", you are "+str(age)+" year old.")