def func(a: list[int], b:int) -> int:
  a[0] = a[0] + a[1]
  print(a[0])

def main() -> None:
  a: list[int] = [2, 3]
  a[0] = a[0] + a[1]
  print(a[0])
  func(a, 2)
  print(a[0] + 3)

if __name__ == "__main__":
  main()
