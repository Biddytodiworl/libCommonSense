# Compiler used to compile the code
CC = gcc

# Compiler flags used to compile the code
CFLAGS = -std=c89 -Wall -Wextra -Werror -Wstrict-prototypes -Wpedantic \
-Wmissing-prototypes -Wold-style-definition

# Name of the resulting static library
STATIC_LIB = libCommonSense.a

# Name of the resulting shared library
SHARED_LIB = libCommonSense.so

# Name of the resulting DLL and name of the import library
DLL = CommonSense.dll
IMP_LIB = libCommonSense.a

# Command used to delete files
DEL = rm
