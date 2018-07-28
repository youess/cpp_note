

CC=clang++
CFLAGS=-std=c++11 -Wall -O2

base:
	$(CC) $(CFLAGS) ./base.cpp && ./a.out

bubble:
	$(CC) $(CFLAGS) ./bubble_sort.cpp && python3 ./randn.py 100 | time ./a.out

merge:
	$(CC) $(CFLAGS) ./merge_sort.cpp && python3 ./randn.py 10000 | time ./a.out
