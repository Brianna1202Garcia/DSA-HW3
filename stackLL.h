class stackLL {
private:
	class node {
	public:
		int data; 
		node* next;

		//constructor to initialize nodes with data and a next
		node(int value) {
			data = value;
			next = nullptr;
		}
	};
	
	node* top;

public:
	
	//constructor
	//Run-Time: O(1)
	stackLL() {
		top = nullptr;
	}

	//Take care of memory leaks...(this is the deconstructor)
	//Run-Time: 
	~stackLL() {
		//we make the current node the top node to begin with
		node* current = top;
		//when our stack isn't empty
		while (current != nullptr) {
			//we create a temporary node 
			node* temp = current;
			delete current;
			current = temp -> next;
		}

	}

	//return true if empty, false if not
	//Run-Time: 
	bool empty() {
		//check if top node exists, if it does return false
		if (top == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}

	//add item to top of stack
	//Run-Time:
	void push(int x) {
		//make a new node 
		node* Node = new node(x);

		//check if stack is empty
		if (top == nullptr) {
			//set the top to new node
			top = Node;
		}
		else {
			//link the new node to the current top node
			Node->next = top;

			//update the top to point to the new node
			top = Node;

		}

	}

	//remove and return top item from stack
	//Run-Time:
	int pop() {
		//check if stack is empty
		if (top == nullptr) {
			return -1; 
		}
		else {
			//saving the current top
			node* temp = top;
			//and its data
			int value = temp->data;
			//moving top to the next node
			top = temp->next;
			//free the old top node
			delete temp;
			//return the data
			return value;
		}

	}

	//add item x to stack, but insert it
	//right after the current ith item from the top
	//(and before the i+1 item).
	//Run-Time:
	void insertAt(int x, int i) {
		
	}

};