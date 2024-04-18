a :int = 11
b: int = 20

if a == b:
    c: int = 9
    if a < c:
        print(a)
    elif a == c:
        print(b)
    else:
        c = c + b
        print(c)
else:
    d: int = 0
    i: int = 1
    while d < a:
        d = d + i
        i = i + 1
    print(d)
