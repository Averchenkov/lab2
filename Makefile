lab2: summa.o svertka.o main.o
	g++ summa.o svertka.o main.o -o lab2

summa.o: summa.cpp
	g++ -c summa.cpp

svertka.o: svertka.cpp
	g++ -c svertka.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o lab2
