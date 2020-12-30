CC := gcc
EXERCISE := EXERCISE_1_3

build:
	$(CC) -D $(EXERCISE) -o ./exercises.o exercises.c
	./exercises.o

clean:
	rm ./exercises.o