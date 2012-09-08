all:
	gcc -c string.c
	ar rvs libstring.a string.o
	gcc -o test test.c libstring.a

clean:
	rm -f *.o *.a test
