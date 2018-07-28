
CC=clang++
CFLAGS=-std=c++11 -Wall -O2


.PHONY: hello io io_stdin io_file number sc clean

hello:
	$(CC) $(CFLAGS) hello.cpp -o hello; ./hello

io:
	$(CC) $(CFLAGS) ./io_base.cpp; echo "123   456 \n   another" | ./a.out

io_stdin:
	$(CC) $(CFLAGS) ./io_stdin.cpp && python3 ./random_gen.py 10 | ./a.out

io_file:
	$(CC) $(CFLAGS) ./io_file.cpp && python3 ./random_gen.py 10000 > input.txt && ./a.out && head -n 2 output.txt

number:
	$(CC) $(CFLAGS) ./numbers.cpp && ./a.out

sc:
	$(CC) $(CFLAGS) ./short_code.cpp && ./a.out

clean:
	rm -f hello a.out input.txt output.txt

run:
	$(CC) $(CFLAGS) hello.cpp -o hello; ./hello
	$(CC) $(CFLAGS) ./io_base.cpp; echo "123   456 \n   another" | ./a.out
	$(CC) $(CFLAGS) ./io_stdin.cpp && python3 ./random_gen.py 10 | ./a.out
	$(CC) $(CFLAGS) ./io_file.cpp && python3 ./random_gen.py 10000 > input.txt && ./a.out && head -n 2 output.txt
	$(CC) $(CFLAGS) ./numbers.cpp && ./a.out
	$(CC) $(CFLAGS) ./short_code.cpp && ./a.out
	rm -f hello a.out input.txt output.txt
