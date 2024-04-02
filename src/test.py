class A:
    def __init__(self: A, k: int) -> int:
        self.a: int = 2
        self.b: int = k
        self.c: int = 2
    def foo(self: A)->int:
        return self.c
    

a: A = A(3)
a.foo()
