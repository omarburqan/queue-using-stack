#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "stack.h"


class Queue{
	
	public:
	
		Queue(size_t capacity);
		~Queue();
		bool enQueue(int x); 
		int deQueue(); 
		bool isEmpty();
		void print();
		
	private:
	
		Stack* m_stack1;
		Stack* m_stack2;
		
};



#endif /* __QUEUE_H__ */
