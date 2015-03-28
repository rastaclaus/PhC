CPP = g++
OFLAG  = -o
DFLAG  = -D DEBUG

StringizingExpressions:
	$(CPP) $(OFLAG) StringizingExpressions StringizingExpressions.cpp

debug:
	$(CPP) $(DFLAG) $(OFLAG) StringizingExpressions StringizingExpressions.cpp
