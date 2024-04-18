def fibonacci(n: int) -> int:
    if n <= 0:
        return -1
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Example usage:
def main() -> None:
    number: int = 7
    print(fibonacci(number))  # Output: 34

if __name__ == "__main__":
  main()
