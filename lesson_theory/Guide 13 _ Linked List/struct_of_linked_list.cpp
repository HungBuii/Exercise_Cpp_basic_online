#include <iostream>
#include <string>

struct Number {
	int data;
	Number* next;
};

int main() {
	Number node1 = {10, NULL};
	Number node2 = {15, NULL};
	Number node3 = {20, NULL};
	Number* node4 = new Number({25, NULL});
	Number* node5 = new Number({30, NULL});
	Number* node6 = new Number({35, NULL});
	Number* node7 = new Number({40, NULL});
	
	node1.next = &node2; // node1,... node3 la moi gia tri trong bo nho stack
	node2.next = &node3; // ma next la 1 con tro
	node3.next = node4; // node4,... la moi dia chi trong heap
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	
	Number* head = &node1;
	
//	std::cout << head->data << std::endl;
//	std::cout << head->next->data << std::endl;
//	std::cout << head->next->next->data << std::endl;
//	std::cout << head->next->next->next->data << std::endl;
//	std::cout << head->next->next->next->next->data << std::endl;
//	std::cout << head->next->next->next->next->next->data << std::endl;
//	std::cout << head->next->next->next->next->next->next->data << std::endl;
	
	for (Number* p = head; p != NULL; p = p->next) {
		std::cout << p->data << std::endl;
	}
}


