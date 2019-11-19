#include "queue.h"

Queue::Queue(size_t capacity){
	m_stack1 = new Stack(capacity);
	m_stack2 = new Stack(capacity);
}
Queue::~Queue(){
	delete  m_stack1;
	delete  m_stack2;
}
bool Queue::enQueue(int x){

	while (!m_stack1->isEmpty())
	    m_stack2->push(m_stack1->pop()); 
	     
	m_stack1->push(x);
	
	while (!m_stack2->isEmpty())
		m_stack1->push(m_stack2->pop());
	
	return true;
}
int Queue::deQueue(){
    if (m_stack1->isEmpty()) { 
        std::cout << "Queue is Empty "; 
       	return 0; 
    }  
    return m_stack1->pop();
}
void Queue::print(){

	m_stack1->print();	
		
}

