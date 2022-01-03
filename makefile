a.exe:stack_app.o stack_imp.o
	c++ stack_app.o stack_imp.o -o a.exe
stack_app.o:stack_app.cpp
	c++ -c stack_app.cpp
stack_imp.o:stack_imp.cpp
	c++ -c stack_imp.cpp