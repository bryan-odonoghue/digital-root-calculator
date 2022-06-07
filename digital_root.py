import sys
import math

#recursive calls to calc digital root in base 10
def rootCalc(x):
    if x == 0: #base case
        return 0
    return (x % 10 ) + rootCalc(math.trunc(x / 10)) #keep calling and taking in the rightmost digit as return

numsList = sys.argv[1:] 
numsList = [int(i) for i in numsList]
print(str(numsList))
print('the sum of all of your numbers is {a} and the digital root in base 10 of your numbers is {b}'.format(a = sum(numsList), b = str(rootCalc(sum(numsList)))))



