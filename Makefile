include config.mk

all: static shared tests

static: io.o math.o
	ar rcs $(STATIC_LIB) io.o math.o

shared: io.o math.o
	$(CC) io.o math.o -shared -fPIC -o $(SHARED_LIB)

tests: file_copy.o file_size.o file_name_size.o math_ops.o
	$(CC) file_copy.o -o tests/file_copy/file_copy -L. -lCommonSense
	$(CC) file_size.o -o tests/file_size/file_size -L. -lCommonSense
	$(CC) file_name_size.o -o tests/file_size/file_name_size -L. -lCommonSense
	$(CC) math_ops.o -o tests/math_ops/math_ops -L. -lCommonSense
	$(RM) *.o

clean:
	$(RM) *.a
	$(RM) *.so
	$(RM) tests/*/*.exe

io.o:
	$(CC) src/io.c $(CFLAGS) -c

math.o:
	$(CC) src/math.c $(CFLAGS) -c

file_copy.o:
	$(CC) tests/file_copy/file_copy.c $(CFLAGS) -c

file_size.o:
	$(CC) tests/file_size/file_size.c $(CFLAGS) -c

file_name_size.o:
	$(CC) tests/file_size/file_name_size.c $(CFLAGS) -c

math_ops.o:
	$(CC) tests/math_ops/math_ops.c $(CFLAGS) -c
