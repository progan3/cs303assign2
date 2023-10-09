/*#include <iostream>
using namespace std;
template <typename item_type>
class Single_Linked_List {
private:
	Node* head, * tail;
	int num_items;
public:
	struct Node {
		Item_Type data;
		Node<item_type>* next;

	};
	Single_Linked_List() {
		head = NULL;
		tail = NULL;
		num_items = 0;
	}
	void push_front(const item_type& item) {
		head = new Node(item);
		if (head->next != NULL) {
			head->next = head;
		}
		if (tail == NULL) {
			tail = head;
		}
		num_items++;
	}
	void push_back(const item_type& item) {
		if (tail != NULL) {
			tail->next = new Node(item);
			tail = tail->next;
			num_items++;
		}
		else {
			push_front(item);
		}
	}
	void pop_front() {
		if (head == NULL) {
			throw invalid_argument("Attempted pop_front() on an empty list");
		}
		Node* removed_node = head;
		head = head->next;
		delete removed_node;
		if (head != NULL) {
			head = NULL;
		}
		else {
			tail = NULL;
		}
		num_items--;
	}
	void pop_back() {
		if (tail == NULL) {
			throw invalid_argument("Attempted pop_back() on an empty list");
		}
		Node* removed_node = tail;
		delete removed_node;
		if (tail != NULL) {
			tail->next = NULL;
		}
		else {
			head = NULL;
		}
		num_items--;
	}
	item_type& front() {
		return head;
	}
	item_type& back() {
		return tail;
	}
	bool empty() const {
		if (num_items == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert(size_t index, const item_type& item) {
		if (index.current == head) {
			push_front(item);
		}
		else if (index.current == NULL) {
			push_back(item);
		}
		else {
			Node* new_node = new Node(item);
			index.current->next = new_node;
			index.current = new_node;
			num_items++;
		}
	}
	bool remove(size_t index) {
		if (empty()) {
			return false;
		}
		else if (index == end()) {
			return false;
		}
		else {
			Node* removed_node = index.current;
			removed_node->next = removed_node;
			delete removed_node;
			return true;
		}
	}
	size_t find(const item_type& item) {
		int i = 0;
		Node* temp = head;
		while (temp != item) {
			temp->next = next;
			temp->data = data;
			i++;
		}
		if (temp == item) {
			return i;
		}
		else {
			return num_items;
		}
	}
};*/