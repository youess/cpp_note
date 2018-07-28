#include <stdio.h>
#include <iostream>

// libevent header
#include <event.h>

// event_init() -> evtimer_set() -> event_add() => event_dispatch()

using namespace std;

// 定时事件回调函数
void onTime(int sock, short event, void *args)
{
	cout << "Game over!" << endl;
	struct timeval tv;
	tv.tv_sec = 0;
	tv.tv_usec = 500000;  // 0.5s 
	//重新添加定时事件，触发默认删除
	event_add((struct event*)args, &tv);
}

int main(int argc, char *argv[])
{
	event_init();

	struct event evTime;
	evtimer_set(&evTime, onTime, &evTime);

	// 添加定时事件
	struct timeval tv;
	tv.tv_sec = 0;
	tv.tv_usec = 500000;

	event_add(&evTime, &tv);

	// 事件循环
	event_dispatch();

	return 0;
}
