def main() -> None:
    n :int = 10
    count: int = 1
    prime: int = 2

    while count < n:
        # Find more primes
        prime += 1 + prime % 2  # Next candidate (3, 5, ... odds)
        
        # Check if divisible by any number
        divisor: int = 3
        flag: int = 0;
        while divisor < prime:
            if prime % divisor == 0:
                flag = 1
                break  # Not a prime, don't count it
            divisor += 2  # Move to the next odd divisor
        
        if flag == 0:     
            print(prime)   
            count += 1  # Didn't break, it's a prime

    print(prime)

    
if __name__ == "__main__":
    main()
