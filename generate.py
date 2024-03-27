s = []
block = {}
num = {}


def find():
    sum = 0
    i = 0
    while sum + block[i] < int((s.__len__() + 1) / 2) != 0:
        sum += block[i]
        i += 1
    i = int(i * pow(1e6, 0.5))
    while sum + num[i] < int((s.__len__() + 1) / 2) != 0:
        sum += num[i]
        i += 1
    print(i)


for i in range(0, int(1e5 + 10)):
    block[i] = num[i] = 0
T = int(input())
while T != 0:
    string = input()
    string = string.split(" ")
    if string[0] == "Pop":
        if s.__len__() == 0:
            print("Invalid")
        else:
            t = s.pop()
            num[t] -= 1
            block[int(t / pow(1e6 + 10, 0.5))] -= 1
            print(t)
    elif string[0] == "PeekMedian":
        if s.__len__() == 0:
            print("Invalid")
        else:
            find()
    else:
        t = int(string[1])
        s.append(t)
        num[t] += 1
        block[int(int(t) / pow(1e6 + 10, 0.5))] += 1
    T -= 1
