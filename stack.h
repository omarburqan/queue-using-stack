#ifndef __STATCK_H__
#define __STATCK_H__

#include <iostream>


class Stack{
	
	public:
	
		Stack(size_t capacity);
		~Stack();
		bool push(int x); 
		int pop(); 
	    //int peek(); 
		bool isEmpty();
		void print();
		bool hasSpace();
	private:
	
		size_t m_capacity;
		size_t m_index;
		int* m_arr;

};



#endif /* __STATCK_H__ */
