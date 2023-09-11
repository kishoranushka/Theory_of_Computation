# WAP of DFA which accepts strings of only a and b and start and end with the same symbol

enter_string = input("enter the string: ")

for i in range(len(enter_string)):
  if(enter_string[i] != 'a' and enter_string[i] !='b'):
    print("Invalid Input")
    break

else:
  if(enter_string[i] == enter_string[-1]):
    print("Valid Input")
    print("The string is: "+enter_string)