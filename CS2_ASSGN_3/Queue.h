#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
template<typename T>
class Queue//circular queue
{
private:
	int front;//the index of the front element in the queue
	int rear;//the index of the rear element in the queue
	int count;//the number of elements  in the queue
	T* arr;//the array of the queue
	int size;//the size of the queue(will be used to decide the max size of the queue

public:
	Queue()//default constructor that sets the size of the queue to 10
	{
		this->front = -1;
		this->rear = -1;
		this->count = 0;
		this->size = 10;
		this->arr = new T[size];
	}
	Queue(int x)//initial value constructor that sets the size of the queue to the integer input
	{
		this->front = -1;
		this->rear = -1;
		this->count = 0;
		this->size = x;
		this->arr = new T[size];
	}
	~Queue()//destructor for the queue
	{
		delete[]this->arr;
	}
	bool isEmpty() const//function that checks if the queue is empty
	{
		if (this->GetCount() == 0)
			return 1;
		else
			return 0;
	}
	bool isFull() const//functiont that checks if a queue is full
	{
		if (this->GetCount() == (this->GetSize()))
			return 1;
		else
			return 0;
	}
	void push(T temp)//function that pushes an element to the queue
	{
		if (this->isEmpty())
		{
			this->front = 0;
			this->rear = 0;
			this->arr[0] = temp;
			this->count++;
		}
		else if (!this->isFull())
		{
			this->arr[++rear % this->GetSize()] = temp;
			this->rear %= this->GetSize();
			count++;
		}
		else
		{
			cout << "The array full" << endl;
		}
	}
	T pop()//functions that returns the front of the queue and sets the front to front +1
	{
		if (!this->isEmpty())
		{
			int x = this->front;
			this->front = (this->front + 1) % this->GetSize();
			this->count--;
			return this->arr[x];
		}
		else
			cout << "The queue is empty" << endl;
		return this->arr[front];
	}
	int GetCount() const//returns the current number of elements in the queue
	{
		return this->count;
	}
	int GetSize() const//returns the size of the queue
	{
		return this->size;
	}
};
#endif

