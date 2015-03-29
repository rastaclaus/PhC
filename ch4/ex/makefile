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
	ex3\
	ex4\
	ex5\
	ex6\
	ex7\
	ex8\
	ex11\
	ex11a


ex1: obj/ex1.o
	$(C) $(OFLAG) bin/$@ obj/ex1.o

ex2: obj/ex2.o
	$(CPP) $(OFLAG) bin/ex2 obj/ex2.o

ex3: obj/ex3.o obj/s.o
	$(CPP) $(OFLAG) bin/ex3 obj/ex3.o obj/s.o

ex4: obj/ex4.o obj/s2.o
	$(CPP) $(OFLAG) bin/ex4 obj/ex4.o obj/s2.o

ex5: obj/ex5.o obj/s3.o
	$(CPP) $(OFLAG) bin/ex5 obj/ex5.o obj/s3.o

ex6: obj/ex5.o obj/s4.o
	$(CPP) $(OFLAG) bin/ex6 obj/ex5.o obj/s4.o

ex7: obj/ex7.o ../CppLib.o
	$(CPP) $(OFLAG) bin/ex7 obj/ex7.o ../CppLib.o

ex8: obj/ex8.o ../Stack.o
	$(CPP) $(OFLAG) bin/ex8 obj/ex8.o ../Stack.o

ex11: obj/ex11.o
	$(CPP) $(OFLAG) bin/ex11 obj/ex11.o

ex11a: obj/ex11a.o
	$(CPP) $(OFLAG) bin/ex11a obj/ex11a.o


obj/ex1.o: src/ex1.c
obj/ex2.o: src/ex2.cpp
obj/ex3.o: src/ex3.cpp src/s.h
obj/ex4.o: src/ex4.cpp src/s2.h
obj/ex5.o: src/ex5.cpp src/s3.h
obj/ex7.o: src/ex7.cpp ../CppLib.h
obj/ex8.o: src/ex8.cpp ../Stack.h
obj/ex11.o: src/ex11.cpp
obj/ex11a.o:
	$(CPP) -c -D MAINTEST $(OFLAG) obj/ex11a.o src/ex11.cpp
obj/s.o: src/s.cpp src/s.h
obj/s2.o: src/s2.cpp src/s2.h
obj/s3.o: src/s3.cpp src/s3.h
obj/s4.o: src/s4.cpp src/s3.h
../CppLib.o: ../CppLib.cpp ../CppLib.h
../Stack.o: ../Stack.cpp ../Stack.h

