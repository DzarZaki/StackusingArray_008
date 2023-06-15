#include<iostream>
#include<string>

using namespace std;

class program {
private:
	string stack_array[5];
	int top; 

public:
	program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "stack full" << endl;
			return "";
		}

		top++; 
		stack_array[top] = element; 

		cout << endl; 
		cout << element << " ditambahkan(pushed)." << endl;

		return element;
	} 

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. cannot pop." << endl;
			return;
		}

		cout << "\nThe poppned element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[top] << endl;
			}
		}
	}
};
