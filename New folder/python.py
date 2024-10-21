import re
def isphonenumber(number):
    pattern = r'0261-123-4567'
    if re.match(pattern, number):
        return True
    else:
        return False

def main():
    user_input = input("Enter a phone number in the format 0261-123-4567: ")
    if isphonenumber(user_input):
        print("Valid phone number")
    else:
        print("Invalid phone number")

if __name__ == "__main__":
    main()
