CC := gcc
EXERCISE := EXERCISE_1_4

all:
	$(CC) -D $(EXERCISE) -o ./exercises.o ./exercises.c
	./exercises.o

clean:
	rm ./exercises.o