# comment added for test;
#
# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C04
# using the gcc compiler
# Note: does not make files that will 
# not compile with this compiler
# Invoke with: make -f gcc.makefile

CPP = g++
C = gcc
OFLAG = -o
.SUFFIXES : .o .cpp .c
.cpp.o :
	$(CPP) $(CPPFLAGS) -c $<
.c.o :
	$(C) $(CPPFLAGS) -c $<

all: \
	ex1 \
	ex2 \
	ex3 \
	ex4 \
	ex5 \
	ex6 \
	ex7 \
	ex8 \
	ex11 \
	ex11a


test: all
	./ex1
	./ex2
	./ex3
	./ex4
	./ex5
	./ex6
	./ex7
	./ex8
	./ex11
	./ex11a


bugs:
	@echo No compiler bugs in this directory!

ex1: ex1.o
	gcc $(OFLAG) ex1 ex1.o

ex2: ex2.o
	$(CPP) $(OFLAG) ex2 ex2.o

ex3: ex3.o s.o
	$(CPP) $(OFLAG) ex3 ex3.o s.o

ex4: ex4.o s2.o
	$(CPP) $(OFLAG) ex4 ex4.o s2.o

ex5: ex5.o s3.o
	$(CPP) $(OFLAG) ex5 ex5.o s3.o

ex6: ex5.o s4.o
	$(CPP) $(OFLAG) ex6 ex5.o s4.o

ex7: ex7.o ../CppLib.o
	$(CPP) $(OFLAG) ex7 ex7.o ../CppLib.o

ex8: ex8.o ../Stack.o
	$(CPP) $(OFLAG) ex8 ex8.o ../Stack.o

ex11: ex11.o
	$(CPP) $(OFLAG) ex11 ex11.o

ex11a: ex11a.o
	$(CPP) $(OFLAG) ex11a ex11a.o

ex1.o: ex1.c
ex2.o: ex2.cpp
ex3.o: ex3.cpp s.h
ex4.o: ex4.cpp s2.h
ex5.o: ex5.cpp s3.h
ex7.o: ex7.cpp ../CppLib.h
ex8.o: ex8.cpp ../Stack.h
ex11.o: ex11.cpp
ex11a.o:
	$(CPP) -c -D MAINTEST $(OFLAG) ex11a.o ex11.cpp
s.o: s.cpp s.h
s2.o: s2.cpp s2.h
s3.o: s3.cpp s3.h
s4.o: s4.cpp s3.h
../CppLib.o: ../CppLib.cpp ../CppLib.h
../Stack.o: ../Stack.cpp ../Stack.h

