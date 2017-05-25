include config.mk

all: static shared tests

static: io.o math.o
	ar rcs $(STATIC_LIB) io.o math.o

shared: io.o math.o
	$(CC) io.o math.o -shared -fPIC -o $(SHARED_LIB)

tests: file_copy.o file_size.o file_name_size.o cube.o factorial.o square.o
	$(CC) file_copy.o -o tests/io/file_copy/file_copy -L. -lCommonSense
	$(CC) file_size.o -o tests/io/file_size/file_size -L. -lCommonSense
	$(CC) file_name_size.o -o tests/io/file_size/file_name_size -L. -lCommonSense
	$(CC) square.o -o tests/math/square/square -L. -lCommonSense
	$(CC) cube.o -o tests/math/cube/cube -L. -lCommonSense
	$(CC) factorial.o -o tests/math/factorial/factorial -L. -lCommonSense
	$(RM) *.o

clean:
	$(RM) *.a
	$(RM) *.so
	$(RM) tests/math/*/*.exe
	$(RM) tests/io/*/*.exe

io.o:
	$(CC) src/io.c $(CFLAGS) -c

math.o:
	$(CC) src/math.c $(CFLAGS) -c

file_copy.o:
	$(CC) tests/io/file_copy/file_copy.c $(CFLAGS) -c

file_size.o:
	$(CC) tests/io/file_size/file_size.c $(CFLAGS) -c

file_name_size.o:
	$(CC) tests/io/file_size/file_name_size.c $(CFLAGS) -c

square.o:
	$(CC) tests/math/square/square.c $(CFLAGS) -c

cube.o:
	$(CC) tests/math/cube/cube.c $(CFLAGS) -c

factorial.o:
	$(CC) tests/math/factorial/factorial.c $(CFLAGS) -c
