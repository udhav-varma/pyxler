mile:  	lexer.l parser.y node.hpp node.cpp main.cpp
		bison -o parser.tab.cpp -d -t parser.y
		flex -o lexer.cpp lexer.l
		c++ -o $@ parser.tab.cpp lexer.cpp node.hpp node.cpp main.cpp -lfl -ll -Wno-write-strings -g