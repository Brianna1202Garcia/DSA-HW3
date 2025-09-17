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
		int data = 0;
		top = nullptr;
		//next = ?

		
	}

	//Take care of memory leaks...(this is the deconstructor)
	//Run-Time: 
	~stackLL()
	{}

	//return true if empty, false if not
	//Run-Time: 
	bool empty() {
		
	}

	//add item to top of stack
	//Run-Time:
	void push(int x)
	{}

	//remove and return top item from stack
	//Run-Time:
	int pop()
	{}

	//add item x to stack, but insert it
	//right after the current ith item from the top
	//(and before the i+1 item).
	//Run-Time:
	void insertAt(int x, int i)
	{}

};