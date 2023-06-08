from math import *
from collections import *
from sys import *
from os import *

def missingAndRepeating(arr, n):
    # Write your code here
    s1 = n*(n+1)//2;
    s2 = (n*(n+1)*(2*n+1)//6);
    t1,t2 = 0,0;
    for i in arr: 
        t1+=i; t2+=(i*i);

    val1,val2 = t1-s1,t2-s2; # x-y = val1, x^2-y^2 = val2
    val2 //= val1; # x+y = val2/val1

    x = (val1+val2)//2 # from x+y = val1 and x-y = val2 we find x and then y
    return [x-val1,x]


# since in cpp long long is insufficient for big integers switched to python