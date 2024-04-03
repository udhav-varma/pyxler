def bubbleSort(array: list[int]) -> None:
  i: int = 0
  j: int = 0
  for i in range(len(array)):
    swapped: int = 0
    for j in range(0, len(array) - i - 1):
      temp:int = array[j]
      array[j] = array[j + 1]
      array[j + 1] = temp
      swapped = 1
    if swapped == 0:
      break


def main() -> None:
  data: list[int] = [1, 2, 3, 4]
  bubbleSort(data)

  print('Sorted Array in Ascending Order:')
  i: int = 0
  for i in range(len(data)):
    print(data[i])


if __name__ == "__main__":
  main()
