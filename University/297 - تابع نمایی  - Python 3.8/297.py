# In the name of GOD
# Created by: Faraz Golshahi
# Email: Faraz.golshahi8151@gmail.com
# Github: https://github.com/FarazGolshahii
# Question link: https://quera.org/problemset/297/

x = int(input())
n = int(input())
total = fact = 1
for i in range(1, n):
    fact *= i
    total += (pow(x, i) / fact)
print("{:.3f}".format(total))