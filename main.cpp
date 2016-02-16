#include <iostream>
#include <thread>

using namespace std;

void thread_one(int num)
{
	while (num < 100)
	{
		num += 10;
	}
	
	cout << "Thread one: " << num << endl;
}

void thread_two(int num)
{
	while (num < 100)
	{
		num += 5;
	}
	
	cout << "Thread two: " << num << endl;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double i;
	double j;
	
	i = 0;
	j = 0;
	
	thread first_thread (thread_one, i);
	thread second_thread (thread_two, j);
	
	first_thread.join();
	second_thread.join();
	
	return 0;
}
