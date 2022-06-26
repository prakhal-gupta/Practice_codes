mobile_number = input()
c='l'
s='o'
count= 0
for i in range(0,len(mobile_number)):
    if(mobile_number[i]==c or mobile_number[i]==s):
        count = count + 1
if(count == 0):
    print("No mistakes")
else:
    mobile_number = mobile_number.replace("l","1")
    mobile_number = mobile_number.replace("o","0")
    print(count)
    print(mobile_number)
