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
	ex11a\
	ex13\
	ex14\
	ex15\
	ex16\
	ex17\
	ex18\
	ex19\
	ex20\
	ex21\
	ex21c\
	ex22


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

ex7: obj/ex7.o obj/CppLib.o
	$(CPP) $(OFLAG) bin/ex7 obj/ex7.o obj/CppLib.o

ex8: obj/ex8.o obj/Stack.o
	$(CPP) $(OFLAG) bin/ex8 obj/ex8.o obj/Stack.o

ex11: obj/ex11.o
	$(CPP) $(OFLAG) bin/ex11 obj/ex11.o

ex11a: obj/ex11a.o
	$(CPP) $(OFLAG) bin/ex11a obj/ex11a.o

ex13: obj/ex13.o obj/Video.o
	$(CPP) $(OFLAG) bin/ex13 obj/ex13.o obj/Video.o

ex14: obj/ex14.o obj/Video.o obj/Stack.o
	$(CPP) $(OFLAG) bin/ex14 obj/ex14.o obj/Video.o obj/Stack.o

ex15: obj/ex15.o
	$(CPP) $(OFLAG) bin/ex15 obj/ex15.o

ex16: obj/ex16.o obj/CppLib.o
	$(CPP) $(OFLAG) bin/ex16 obj/ex16.o obj/CppLib.o

ex17: obj/ex17.o obj/CppLib.o
	$(CPP) $(OFLAG) bin/ex17 obj/ex17.o obj/CppLib.o

ex18: obj/ex18.o obj/CppLib.o
	$(CPP) $(OFLAG) bin/ex18 obj/ex18.o obj/CppLib.o

ex19: obj/ex19.o obj/Nested.o
	$(CPP) $(OFLAG) bin/ex19 obj/ex19.o obj/Nested.o

ex20: obj/ex20.o
	$(CPP) $(OFLAG) bin/ex20 obj/ex20.o

ex21: obj/ex21.o
	$(CPP) $(OFLAG) bin/ex21 obj/ex21.o

ex21c: obj/ex21c.o
	$(C) $(OFLAG) bin/ex21c obj/ex21c.o

ex22: obj/ex22.o obj/Stack.o obj/CppLib.o
	$(CPP) $(OFLAG) bin/ex22 obj/ex22.o obj/Stack.o obj/CppLib.o

obj/ex1.o: src/ex1.c
obj/ex2.o: src/ex2.cpp
obj/ex3.o: src/ex3.cpp src/s.h
obj/ex4.o: src/ex4.cpp src/s2.h
obj/ex5.o: src/ex5.cpp src/s3.h
obj/ex7.o: src/ex7.cpp src/CppLib.h
obj/ex8.o: src/ex8.cpp src/Stack.h
obj/ex11.o: src/ex11.cpp
obj/ex11a.o:
	$(CPP) -c -D MAINTEST $(OFLAG) obj/ex11a.o src/ex11.cpp
obj/ex13.o: src/ex13.cpp
obj/ex14.o: src/ex14.cpp
obj/ex15.o: src/ex15.cpp
obj/ex16.o: src/ex16.cpp
obj/ex17.o: src/ex17.cpp
obj/ex18.o: src/ex18.cpp
obj/ex19.o: src/ex19.cpp
obj/ex20.o: src/ex20.cpp
obj/ex21.o: src/ex21.cpp
obj/ex21c.o: src/ex21.c
	$(C) -c $(OFLAG) obj/ex21c.o src/ex21.c
obj/ex22.o: src/ex22.cpp
obj/Video.o: src/Video.cpp
obj/s.o: src/s.cpp src/s.h
obj/s2.o: src/s2.cpp src/s2.h
obj/s3.o: src/s3.cpp src/s3.h
obj/s4.o: src/s4.cpp src/s3.h
obj/CppLib.o: src/CppLib.cpp src/CppLib.h
obj/Nested.o: src/Nested.cpp src/Nested.h
obj/CppLib.o: src/CppLib.cpp src/CppLib.h
obj/Stack.o: src/Stack.cpp src/Stack.h

