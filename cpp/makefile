CC = g++
CFLAGS = -L/usr/local/lib

Calculate: main.o PowerRule.o DisplayAnswer.o
	$(CC) $(CFLAGS) -o Calculate main.o PowerRule.o DisplayAnswer.o

Main.o: include.h

PowerRule.o: include.h

DisplayAnswer.o: include.h

clean:
	rm *.o
