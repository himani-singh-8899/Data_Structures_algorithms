# -*- coding: utf-8 -*-
"""Untitled6.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1QYAi1ZMj3Hscb7c7J3HstkryY4bHgb9K
"""

from collections import deque
def LC(number, n, maping):
 
    list = []
    q = deque()
    q.append("")
 
    while len(q) != 0:
        s = q.pop()
 
       
        if len(s) == n:
            list.append(s)
        else:
 
            
            for letter in maping[number[len(s)]]:
                q.append(s + letter)
 
    
    return list
 
 

def letterCombinations(number, n):
 
    maping = ["z","abc", "def", "ghi", "jkl",
             "mno", "pqr", "stu", "vw","xy"]
 
    list = LC(number, n, maping)
 
    s = ""
    for word in list:
        s += word + " "
 
    print(s)
    return
res=input("")
number=[int(x) for x in str(res)]
n = len(number)
letterCombinations(number, n)

