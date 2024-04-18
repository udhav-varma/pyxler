# Initialize the array
arr: list[int] = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]

# Value to search for
x: int = 11

# Initialize the low and high indices
low: int = 0
high: int =  10

# Perform binary search
while low <= high:
    mid: int = (low + high) // 2
    
    if arr[mid] == x:
        print(mid)
        break
    elif arr[mid] < x:
        low = mid + 1
    else:
        high = mid - 1
        