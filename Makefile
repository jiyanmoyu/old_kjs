kjs:grammar.o testkjs.o
	g++ -o kjs grammar.o array_object.cpp bool_object.cpp collector.cpp date_object.cpp debugger.cpp dtoa.cpp error_object.cpp \
	fpconst.cpp function.cpp function_object.cpp identifier.cpp internal.cpp interpreter.cpp lexer.cpp list.cpp value.cpp lookup.cpp math_object.cpp \
	nodes.cpp nodes2string.cpp number_object.cpp object.cpp object_object.cpp operations.cpp property_map.cpp reference.cpp \
	reference_list.cpp regexp.cpp regexp_object.cpp scope_chain.cpp string_object.cpp ustring.cpp testkjs.o
grammar.o:grammar.cpp
	g++ -c grammar.cpp
testkjs.o:testkjs.cpp
	g++ -c testkjs.cpp
grammar.cpp:grammar.y
	bison -d -r all grammar.y
clean:
	rm kjs
