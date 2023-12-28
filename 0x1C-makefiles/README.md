# 0x1C. Makefiles

This repository contains a series of Makefiles designed to compile and manage a C project. Each task focuses on different aspects of Makefiles, ranging from basic compilation to more advanced features.

## Task 0: make -f 0-Makefile

### Makefile Content:

```make
# 0-Makefile

all:
	gcc main.c school.c -o school

clean:
	-rm -f *~
	-rm -f school

run: all
	./school

