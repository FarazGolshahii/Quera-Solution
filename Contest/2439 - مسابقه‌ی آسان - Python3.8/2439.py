# In the name of GOD
# Created by: Faraz Golshahi
# Contact: info@farazgolshahi.com

import math

n = input().split(' ')
for i in range(len(n)):
    n[i] = int(n[i])
fact = math.factorial(n[0])
fact = str(fact)
ls = []
for i in fact:
    ls.append(i)
print(ls.count(str(n[1])))