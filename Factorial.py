"""simple Factorial code"""

userـnumber = int(input("give me a numebr: "))


def Factorial(user):
    res = 1
    for i in range(1, userـnumber + 1):
        res = res * i
    print(res)


Factorial(userـnumber)
