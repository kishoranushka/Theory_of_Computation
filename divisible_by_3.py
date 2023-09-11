# wap to implement DFA that accepts all the binary string over input alphabet {0,1} which are divisible by 3

def read_string_from_end(input_string):
  reversed_string= input_string[::-1]
  return reversed_string


original_string = input("enter the string : ")
for i in range(len(original_string)):
  if ((original_string[i]) != '0' and (original_string[i]) !='1'):
    print("Invalid Input.")
    break
else:
  reversed_string = read_string_from_end(original_string)
  # print(reversed_string)

  num=0
  for i in range(len(reversed_string)):
    num=num+ int(reversed_string[i])*pow(2,i)
  
  if(num%3==0):
    print("Divisible by 3")
  else:
    print("Not divisible by 3")
  