#pragma once
#include <iostream>

using namespace std;

template <class T>
class Queue
{
private:

	int frontElement;
	int rear;
	int length;
	int capacity;
	T *array;

public:

	Queue()
	{
		frontElement = rear = -1;
		length = 0;
		capacity = 1;
		this->array = new T[1];
	}

	~Queue()
	{
		delete[] this->array;
	}

	void push(T element)
	{
		if (length == capacity)	// Checking if we have more space to add elements
		{
			T *temp = new T[capacity * 2];		//Doubling the capacity of temp array to add more elements

			for (int i = 0; i < capacity; i++)
			{
				temp[i] = this->array[i];		//Copy the elements to onther array with new capacity
			}

			delete[] this->array;		// Deleting the pervious array after copying the elements
			capacity *= 2;				//Doubling Queue array capacity to contain the elements
			this->array = temp;			// Assignment the Queue array with the elements
													
			rear++;
			this->array[rear] = element;		 // push the element in the end of Queue array
			length++;
			
		}

		else
		{
			rear++;
			this->array[rear] = element;
			length++;
			
		}
	}

	void pop()
	{
		T temp;

		if (length == 0)
		{
			cout << "The Queue is empty\n";
		}

		else
		{
			temp = this->array[frontElement +1];
			frontElement++;
			length--;
		}

	}

	int size()
	{
		return this->length;
	}

	void display()
	{
		for (int i = frontElement +1 ; i < rear+1 ; i++)
		{
			cout << this->array[i] << " ";
		}
	}

	T front()
	{
		return this->array[frontElement];
	}

};

