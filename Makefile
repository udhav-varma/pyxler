mile:  	lexer.l parser.y node.hpp
		bison -o parser.tab.cpp -d -t parser.y
		flex -o lexer.cpp lexer.l
		c++ -o $@ parser.tab.cpp lexer.cpp node.hpp -lfl -ll