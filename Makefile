

CC=clang++ -std=c++11

libevent-timer:
	$(CC) ./libevent/timer/timer.cpp -levent

libevent-tcp:
	$(CC) ./libevent/tcp/tcp_server.cpp -levent

clean:
	find . -name "*.out" -exec rm -f {} \;
