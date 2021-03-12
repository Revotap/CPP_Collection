demo: demo.cpp libmy.a Link.h LinkedList.h
	g++ demo.cpp -o demo -Llib -lmy

libmy.a: Link.o LinkedList.o
	ar r lib/libmy.a Link.o LinkedList.o

Link.o: Link.cpp
	g++ -c Link.cpp

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp

clean:
	rm demo lib/* *.o
