# In the name of GOD
# Created by: Faraz Golshahi
# Email: Faraz.golshahi8151@gmail.com
# Github: https://github.com/FarazGolshahii
# Question link: https://quera.org/problemset/292/

n = int(input())
l = [float(input()) for x in range(n)]
su = sum(l)
mi = min(l)
ma = max(l)
print(("Max: %.4f" % ma)[:-1])
print(("Min: %.4f" % mi)[:-1])
print(("Avg: %.4f" % (su / n))[:-1])