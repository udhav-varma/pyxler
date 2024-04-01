def foo(a: int, b: int) -> int:
    a = a + 5
    return a

c: int = 4
d: int = 5
d = foo(c, d)

