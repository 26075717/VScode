first_name = input("Enter your first name: ")
last_name = input("Enter your last name: ")
bio = input("Enter your bio: ").replace("I am","I'm").strip()

username = f'{first_name[0]}{last_name}'

print(f"Hey, {first_name} your email is {username.lower().title()}@univisity.ac.za. your bio is : {bio} ")
print(f"Your bio has {len(bio)} words")