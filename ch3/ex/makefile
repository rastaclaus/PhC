CPP = g++
OFLAG = -o

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(CPP) $(CPPFLAGS) -c $<
.c.o :
	$(CPP) $(CPPFLAGS) -c $<

all: \
	ArgsToFloats\
	ArgsToInts\
	ArgsToLongs\
	ArrayAddresses\
	Bitwise\
	Boolean\
	ex03\
	ex05\
	ex07\
	ex08\
	ex15\
	ex16\
	ex18\
	ex21\
	ex25\
	ex26\
	ex27\
	ex28\
	ex29\
	ex32\
	FileStatic\
	Ifthen\
	mainEx01\
	makefile\
	Menu\
	PointerArithmetic\
	PointerIncrement2\
	prime\
	Static\
	StructArray\
	test\
	Union\
	YourPets2\
	StringizingExpressions\
	FunctionTable

Bitwise:
	$(CPP) $(OFLAG) Bitwise Bitwise.cpp printBinary.cpp Rotation.cpp
ex08:
	$(CPP) $(OFLAG) ex08 -trigraphs ex08.cpp
ex25:
	$(CPP) $(OFLAG) ex25 printBinary1.cpp ex25.cpp
ex29:
	$(CPP) $(OFLAG) ex29 printBinary1.cpp ex29.cpp
mainEx01:
	$(CPP) $(OFLAG) mainEx01 mainEx01.cpp ex01.cpp
test:
	$(CPP) $(OFLAG) test test.cpp printBinary1.cpp
