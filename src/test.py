class A:
    def __init__(self: A) -> None:
        self.x :int = 1
    def fooin(self: A) -> None:
        pass
class B(A):
    def __init__(self: B, y: int) -> None:
        self.t: int = y
    
    def foo(self: B) -> None:
        self.t = 2

b: B = B(2)
b.fooin()
