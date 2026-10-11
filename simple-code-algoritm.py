Canadas_Power = int(input("give me a number for Canada's Power: "))
France_Power = int(input("give me a number for France's Power: "))
Year = int(input("Number of years: "))


res_canada = Canadas_Power + Year
res_France = France_Power / 2


if res_canada == res_France:
    print("Yes")
else:
    print("No")
