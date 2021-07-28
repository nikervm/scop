names = dict()
f = open("42.obj", "r")
for line in f.read().split("\n"):
    if len(line) == 0:
        continue
    words = line.split(" ")
    if words[0] in names:
        names[words[0]] += 1
    else:
        names[words[0]] = 1
for name in names.keys():
    print(f'{name}: {names[name]}')
