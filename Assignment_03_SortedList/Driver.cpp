#include <iostream>
#include"PriorityQueue.cpp"

using namespace std;

int main()
{
	int x=0;
	PriorityQueue<int> pq;
	pq.Enqueue(10);
	pq.Enqueue(2);
	pq.Enqueue(8);

	while (!pq.is_empty())
	{
		int i = pq.Top();
		cout << i << " ";
		
		pq.Dequeue();
	}
}


