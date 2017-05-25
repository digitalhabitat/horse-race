
horserace: main.o horse.o race.o
	g++ main.o horse.o race.o -o horserace

main.o: main.cpp
	g++ -c main.cpp

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

race.o: race.cpp race.h horse.h
	g++ -c race.cpp

clean:
	rm *.o horserace

run: horserace
	./horserace
