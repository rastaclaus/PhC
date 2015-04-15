CPP = clang++
C = clang
OFLAG = -o

obj/%.o: src/%.cpp
	$(CPP) -c $(OFLAG) $@ $<

obj/%.o: src/%.c
	$(C) -c $(OFLAG) $@ $<


all: \
	ex1\
	ex2\
	ex3

ex1: obj/ex1.o
	$(CPP) $(OFLAG) bin/$@ obj/ex1.o

ex2: obj/ex2.o
	$(CPP) $(OFLAG) bin/$@ obj/ex2.o

ex3: obj/ex3.o obj/ex3class.o
	$(CPP) $(OFLAG) bin/$@ obj/ex3.o obj/ex3class.o

obj/ex1.o: src/ex1.cpp
obj/ex2.o: src/ex2.cpp
obj/ex3.o: src/ex3.cpp
obj/ex3class.o: src/clex3.cpp

