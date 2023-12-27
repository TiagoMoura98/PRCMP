
#!/usr/bin/python3

from datetime import date, timedelta

# Greet the user.
name = input("Hi! What's your name? ")
print(f"Nice to meet you, {name}!")

# Determine the duration of one year.
one_year = timedelta(days=365, hours=4)

# Get the birthday.
print("Tell me about your birthday.")
year = int(input("Year: "))
month = int(input("Month: "))
day = int(input("Day: "))

birthday = date(year, month, day)

# Determine the age.
age = date.today() - birthday

print(f"Your current uptime is {age.days} days!")

if(age < 18 * one_year):
    print("You are underage to drive a car.")
    print("Go get a soda, child!")
else:
    print("You can drive a car, as long as you have a driving licence.")
    print("Drive safe!")

# Say goodbye and leave.
print(f"Goodbye, {name}.")
exit()
