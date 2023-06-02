#include <iostream>
#include <string>

struct Node {
	int data;
	Node* next;
};

struct LinkedList {
	Node* head;
	int length;
};

void print(LinkedList* list) {
//	Node* p = list->head;
//	while(p != NULL) {
//		std::cout << p->data << std::endl;
//		p = p->next;
//	}

	for (Node* p = list->head; p != NULL; p = p->next) {
		std::cout << p->data << std::endl;
	}
}

void push_back(LinkedList* list, int value) {
	Node* node = new Node({value, NULL});
	
	list->length++;
	
	if (list->head == NULL) {
		list->head = node; // list->head se co dia chi cua node
		return; // tuong dong voi if else neu ma chay duoc if thi se khong chay o ben duoi nhu elseif hay else nua
				// doi voi return neu ma chay duoc if thi tat ca cac khoi lenh ben duoi se khong hoat dong nua.
	}
	Node* p = list->head;
	while(p->next != NULL) {
		p = p->next; // dich con tro sang con tro ke tiep
	}
	p->next = node;
}

Node* at(LinkedList* list, int index) {
	int i = 0;
	for (Node* p = list->head; p!= NULL; p = p->next) {
		if (i = index) {
			return p; // dia chi
		}
		i++;
	}
	return NULL;
}

void insert(LinkedList* list, int index, int value) {
	if (index < 0 || index > list->length-1) {
		std::cout << "Out of range!" << std::endl;
		return;
	}
	Node* node = new Node({value, NULL});
	
	list->length++;
	
	if (index == 0) {
		node->next = list->head; // lien ket next cua node voi list cua head (trong do head chi vao data cua Node)
								 // lay con tro cua head sang next
		list->head = node; // cap nhat lai con tro head de tim dia chi cua node vua tao la head
		return;
	}
	
	int i = 1;
	Node* p = list->head->next;
	Node* p_back = list->head;
	
	while (p != NULL) {
		if (i == index) {
			p_back->next = node;
			node->next = p;
			break;
		}
		p_back = p;
		p = p->next;
		i++;
	}
}

void erase(LinkedList* list, int index) {
	if (index < 0 || index > list->length - 1) {
		std::cout << "Out of range!" << std::endl;
		return;
	}
	
	list->length--;
	
	if (index == 0) {
		Node* p = list->head;
		list->head = list->head->next;
		delete(p); // nen dung con tro p de luu dia chi cua list->head cu. Neu delete luon lap tuc se gay ra mat duong dan lien ket chinh de vao danh sach lien ket
		return;
	}
	
	int i = 1;
	Node* p = list->head->next;
	Node* p_back = list->head;
	while (p != NULL) {
		if (i == index) {
			p_back->next = p->next;
			delete(p);
			break;
		}
		p_back = p;
		p = p->next;
		i++;
	}
}

int main() {
	LinkedList list = {NULL, 0};
	
	push_back(&list, 5);
	push_back(&list, 10);
	push_back(&list, 15);
	
	insert(&list, 1, 7);
	
//  Check null khi truy cap 1 phan tu
//	Node* node = at(&list, 1);
//	if (node != NULL) {
//		std::cout << at(&list, 1)->data;
//	}
//	else {
//		std::cout << "Out of range!" << std::endl;
//	}
	
	erase(&list, 2);
	
	print(&list);
}


