n = int(input())
l = [float(input()) for x in range(n)]
su = sum(l)
mi = min(l)
ma = max(l)
print(("Max: %.4f" % ma)[:-1])
print(("Min: %.4f" % mi)[:-1])
print(("Avg: %.4f" % (su / n))[:-1])