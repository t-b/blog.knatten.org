# CXX=~/gcc-trunk/bin/g++
CXX=/usr/bin/clang++
CXXFLAGS=-std=c++0x

objects = main.o lib.o lib2.o c.o

rvo: $(objects)
	$(CXX) -o rvo $(objects)

main.o: c.h lib.h lib2.h
lib.o: lib.h
lib2.o: lib2.h
c.o: c.h

clean:
	rm -f *.o rvo
