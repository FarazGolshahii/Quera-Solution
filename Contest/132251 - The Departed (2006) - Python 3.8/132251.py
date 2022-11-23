results = []

for i in range(1, 6):
    line = input()

    if "FBI" in line:
        results.append(str(i))

if len(results) == 0:
    print("HE GOT AWAY!")

else:
    output = []

    for i in results:
        output.append(i)

    print(" ".join(output))