class A:
    def __init__(self: A) -> None:
        self.a: int = 2
        self.b: int = 5
        self.c: int = 10

a: list[A] = [A(), A(), A()]
a[0]
