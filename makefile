
all: salloc.so salloc.a

salloc.a: salloc.c salloc.h
	gcc -c -fPIC -I. salloc.c -o salloc.o
	ar rcs libsalloc.a salloc.o

salloc.so: salloc.c salloc.h
	gcc -c -fPIC -I. salloc.c -o salloc.o
	gcc -shared salloc.o -o libsalloc.so

test: test.c salloc.a
	gcc test.c  -L. -I. -lsalloc -o test

run_test: test
	sh -c './test & ./test & ./test & wait ; pkill test'

