"""code for Number printer"""

User_number = input("give me a numebr under 100: ")


def main(number):
    '''
    To say a few times `count` works. number is integers
    and 
    To say print what 'i' works. number is strings 
    '''
    count = 0

    for i in number:  # I moved along the numbers. The numbers were strings.
        print(i, ":", end="")  # print the Cardinal or main number
        count = int(i)  # I converted it back to an integer.

        for j in range(count):# I moved along the numbers(i), but this time number is integer
            print(i, end="") #Here I want to say that move on the numbers count which are primenumbers and integers and print i in each iteration which is the same as count but its str

        print()


main(User_number)
