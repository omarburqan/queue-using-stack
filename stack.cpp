#include "stack.h"

Stack::Stack(size_t capacity):m_capacity(capacity),m_index(0){
	m_arr = new int[m_capacity];
}

Stack::~Stack(){
	delete [] m_arr;
}
	
bool Stack::push(int x){
	if (m_index >= m_capacity){
		std::cout << "stack overflow could not push element " << x << std::endl;
		return false;
	}
	m_arr[m_index++] = x;
	return true;
}
int Stack::pop(){
	if (m_index <= 0){
		std::cout << "stack underflow  "; 
		return 0;
	}
	return m_arr[--m_index];
}
/*
int Stack::peek(){
	if (m_index <= 0){
		std::cout << "stack emtpy" << std::endl; 
		return 0;
	}
	return m_arr[m_index - 1];
}
*/
bool Stack::isEmpty(){
	return m_index == 0;
}
void Stack::print(){
	for (size_t i = 0;i<m_index;++i){
		std::cout << m_arr[i] << "    " ;
	}
	std::cout << "\n";
}
