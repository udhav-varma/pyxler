def main() -> None:
    number: int = 431  # Example input (you can replace with any positive number)
    start: int = 0
    end: int = number+1
    ans: int = 0

    # Binary search for integral part
    while start+1 < end:
        mid : int = 0
        mid = (start+end)/2
        if mid*mid <= number:
            start = mid
        else:
            end = mid

    print(start);
    
if __name__ == "__main__":
    main()
    