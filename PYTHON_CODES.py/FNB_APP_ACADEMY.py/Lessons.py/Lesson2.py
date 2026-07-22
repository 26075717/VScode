 # Tracking individual letters
name = "Python"

print(name[0])
print(name[-1])
print(name[2])

# using the String Methods
town = "  Johannesburg   "

print(town.upper())
print(town.strip())

# Creating a proffesional system email generator

first_name = input("Enter your first name: ").strip()
last_name = input("Enter your last name: ").strip()

username = f'{first_name[0]}{last_name}'
print(f"Your email is: {username.lower()}@university.co.za")

# YOUTUBE VIDEO

#message = "Hello world!!!"
#print(message)

# The length of a String
#print("Length of a String")
#print(len(message))
#print(len(message.strip()))

# this print the letter found at the index.
#print()
#print(f"This print the letter found at the index 13 in '{message}'. which is the last letter.")
#print(message[13])

# this print everything in the variable expect the last String.
#print(f"This print everything in the variable expect the last String. '{message}'")
#print(message[0:-1]) 
#print(message[:-1])

# This print everything in the variable.
#print()
#print(f"This print everything in the variable. '{message}'")
#print(message[0:])
#print(message[:])

# Using count to count how many time the word appear in the String
#print()
#print(f"count how many time the word appear in the String. '!' in {message}")
#print(message.count("!"))

# Use .find() to find the index of the letter in the String, the capitalizaion matters.
#print()
#print(f"find the index of the letter in the String. Letter 'H' is what we are looking for here in '{message}'")
#print(message.find("H"))

# use replace(a,b) to replace the word in the String. b will replace a.
#print()
#print(f"To replace the word in the String. replacing 'world' with 'smile' in '{message}'")
#print(message.replace("world","smile"))
#new_message = message.replace("world","smile")
#print(new_message)
