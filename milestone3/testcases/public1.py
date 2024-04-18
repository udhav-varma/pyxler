def factorial_loop(num: int) ->int:
    if num < 0:
        return 0
    elif num == 0:
        return 1
    else:
        result: int = 1
        i: int = 1
        while i <= num:
            result *= i
            i += 1
        return result

# Example usage:
def main() -> None:
    number: int = 7
    print(factorial_loop(number))

if __name__ == "__main__":
  main()
