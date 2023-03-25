#pragma once
#ifndef QUEUE_H
#define QUEUE_H
template<class T>
class Queue
{
private:
	int front;
	int rear;
	int count;
	T* arr;
	int size;

public:
	Queue() ;
	Queue(int);
	~Queue();
	bool isEmpty() const;
	bool isFull() const;
	void push(T);
	T pop();
	int GetCount() const;
	int GetSize() const;
};
#endif

