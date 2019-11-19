#include "queue.h"

using std::cout;
using std::endl;

void test_Stack(){

	cout << "\nSTART TESTING STACK\n" << endl;
	
  	Stack s(5); 
    s.push(10); 
    s.push(20); 
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.print(); 
    cout << s.pop() << " Popped from stack\n"; 
  	cout << s.pop() << " Popped from stack\n"; 
  	cout << s.pop() << " Popped from stack\n"; 
  	cout << s.pop() << " Popped from stack\n";
  	cout << s.pop() << " Popped from stack\n"; 
  	cout << s.pop() << " Popped from stack\n";  
  	
	cout << "\nEND TESTING STACK\n" << endl;
	
}

void test_Queue(){

	cout << "\nSTART TESTING QUEUE\n" << endl;
  	
  	Queue q(5); 
    q.enQueue(1); 
    q.enQueue(2); 
    q.enQueue(3); 
  	q.print();
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
  	
	cout << "\nEND TESTING QUEUE\n" << endl;
	

}

int main() {
	test_Stack();
	test_Queue();
    return 0; 
}
