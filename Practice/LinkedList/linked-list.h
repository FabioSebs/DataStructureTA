#include <iostream>

template <typename T>

namespace LinkedList {
	class Node {
		public:
			T data;
			class Node* next;
	}
	
	class LinkedList {
		public:
			class Node* head;
			class Node* tail;
			int size = 0;

			void add(class Node* insertionNode) {
				// IF LIST IS EMPTY
				if (size == 0) {
					head = insertionNode;
					tail = insertionNode;
					size++;
					return
				}
				
				//ELSE
				
			}
	}
}
