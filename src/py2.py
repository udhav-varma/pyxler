def func(a: int, b: int, c: int) -> int:
    a = a + 10
    b = b + c * a
    c = a * c
    return a + b + c

d: int = func(4, 5, 6)
