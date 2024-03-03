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

output_loc = "./graph.dot"
infile = args.input
instr = "./mile " + infile
ret = os.system(instr)
if ret:
    print("Failed running the code.")
else:
    print("Successful execution\n")

print("Running graph ")

output_loc = "./graph.pdf"
if args.output:
    output_loc = args.output
instr = "dot -Tpdf -o " + output_loc + " ./graph.dot"
ret = os.system(instr)
if ret:
    print("Error in running graphviz")
else:
    print(f"Successfully ran graphviz dot tool. Find output at {output_loc}")

if args.verbose:
    with open('./logs.txt') as f:
        print(f.read())
