CC = g++
CFLAGS = -L/usr/local/lib

Calculate: main.o PowerRule.o
	$(CC) $(CFLAGS) -o Calculate main.o PowerRule.o

Main.o: include.h

PowerRule.o: include.h

clean:
	rm *.o
