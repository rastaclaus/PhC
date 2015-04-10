CPP = clang++
C = clang
OFLAG = -o

obj/%.o: src/%.cpp
	$(CPP) -c $(OFLAG) $@ $<

obj/%.o: src/%.c
	$(C) -c $(OFLAG) $@ $<


all: \
	ex1\
	ex2

ex1: obj/ex1.o
	$(CPP) $(OFLAG) bin/$@ obj/ex1.o

ex2: obj/ex2.o
	$(CPP) $(OFLAG) bin/$@ obj/ex2.o


obj/ex1.o: src/ex1.cpp
obj/ex2.o: src/ex2.cpp
