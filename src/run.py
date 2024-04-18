import argparse
import os
parser = argparse.ArgumentParser()
parser.add_argument("--input", "-input", help='location of input file', type=str, required=True)
parser.add_argument("--output", "-output", help='location of output file, default: graph.pdf', type=str)
parser.add_argument("--verbose", "-verbose", help="Gives log messages of construction of the tree", action="store_true")

args = parser.parse_args()

print("Compiling code\n")
ret = os.system("make")
if ret:
    print("Failed in compilation. Aborted")
    exit()
else:
    print("Compiled Succesfully.\n")

print("Running code\n")

output_loc = "3ac.txt"
if args.output:
    output_loc = args.output
infile = args.input
instr = "./mile " + infile + ">" + output_loc
ret = os.system(instr)
if ret:
    print("Failed running the code.")
    exit()
else:
    print("Successful execution\n")

instr = "gcc -o test x86.s -no-pie"
ret = os.system(instr)
instr = "./test"
ret = os.system(instr)

# print("Running graph ")

# output_loc = "./graph.pdf"
# if args.output:
    # output_loc = args.output
# instr = "dot -Tpdf -o " + output_loc + " ./graph.dot"
# ret = os.system(instr)
# if ret:
    # print("Error in running graphviz")
    # exit()
# else:
    # print(f"Successfully ran graphviz dot tool. Find output at {output_loc}")

if args.verbose:
    with open('./logs.txt') as f:
        print(f.read())
