def recur_factorial(n: int) -> int:
    if n == 1:
        return n
    else:
        return n * recur_factorial(n - 1)


def main() -> None:
    num:int = 7  # You can change this value to find the factorial of a different number
    if num < 0:
        print(0)
    else:
        print(recur_factorial(num))
if __name__ == "__main__":
    main()
