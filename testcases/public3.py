class ShiftReduceParser:

  def __init__(self: ShiftReduceParser, name_: str) -> None:
    self.srname: str = name_


class LR0Parser(ShiftReduceParser):

  def __init__(self: LR0Parser, myname_: str, parentname_: str) -> None:
    self.lr0name: str = myname_
    ShiftReduceParser.__init__(self, parentname_)


class CLRParser(ShiftReduceParser):

  def __init__(self: CLRParser, myname_: str, parentname_: str) -> None:
    self.clrname: str = myname_
    ShiftReduceParser.__init__(self, parentname_)


class LALRParser(CLRParser):

  def __init__(self: LALRParser, myname_: str, clrname_: str, srname_: str) -> None:
    self.lalrname: str = myname_
    CLRParser.__init__(self, clrname_, srname_)

  def print_name(self: LALRParser) -> None:
    print("SLR name:")
    print(self.srname)
    print("CLR name:")
    print(self.clrname)
    print("LALR name:")
    print(self.lalrname)


def main() -> None:
  obj: LALRParser = LALRParser("LALR", "CLR", "Shift-Reduce")
  obj.print_name()


if __name__ == "__main__":
  main()
