class stackLL
{
private:
	class node
	{
	public:
		//stores data;
		int data;
		//Node* next;
	};
	node* next;
	node* top;

public:
	
	//constructor
	//Run-Time:
	stackLL() {
		//maybe?
		int data = 0; //i think this is already done in the private class
		top = nullptr;
		node* head = top;

	}

	//Take care of memory leaks...(this is the deconstructor)
	//Run-Time: 
	~stackLL() {
		//any temp nodes that are made are to be deleted


	}

	//return true if empty, false if not
	//Run-Time: 
	bool empty() {
		//check if top node exists, if it does return return false
		if (!top) {
			return true;
		}
	}

	//add item to top of stack
	//Run-Time:
	void push(int x) {
		//add the node after the top node, you can do this recursively. 

	}

	//remove and return top item from stack
	//Run-Time:
	int pop() {

	}

	//add item x to stack, but insert it
	//right after the current ith item from the top
	//(and before the i+1 item).
	//Run-Time:
	void insertAt(int x, int i) {

	}

};