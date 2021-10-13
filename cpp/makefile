CC = g++
CFLAGS = -L/usr/local/lib

Calculate: main.o PowerRule.o DisplayAnswer.o trig.o NaturalLog.o
	$(CC) $(CFLAGS) -o Calculate main.o PowerRule.o DisplayAnswer.o trig.o NaturalLog.o

Main.o: include.h

PowerRule.o: include.h

DisplayAnswer.o: include.h

Trig.o: include.h

NaturalLog.o: include.h

clean:
	rm *.o Calculate
