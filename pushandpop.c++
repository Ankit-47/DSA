//operation of push ,pop ,exit and display  output using switchcase

#include<iostream>

using namespace std;

const int MAX_SIZE = 100; // Using a constant for the maximum size of the stack

int stack[MAX_SIZE], choice, tos = -1, x, n;

void push() {
    if (tos == MAX_SIZE - 1) { 
        cout << "\n Cannot push any further. Stack is full." << endl;
        return;
    }
    cout << "\n Enter data: ";
    cin >> x;
    tos++;
    stack[tos] = x; //  assigning a value to the array element
}

void display() {
    if (tos == -1) {
        cout << "\n Stack is empty." << endl;
        return;
    }
    cout << "\n Stack elements:" << endl;
    for (int i = 0; i <= tos; i++) { //loop condition to include tos
        cout << stack[i] << endl;
    }
}

void pop() {
    if (tos == -1) {
        cout << "\n Stack is empty. No element to pop." << endl;
        return;
    }
    cout << "\n Element " << stack[tos] << " has been popped." << endl;
    tos--;
    display();
}

void exitProgram() {
    cout << "\n Bye bye." << endl;
}

int main() {
    cout << "\n Enter the size of the stack: ";
    cin >> n;
    
    do {
        cout << "\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exitProgram(); 
                break;
            default:
                cout << "\n Enter a valid choice only." << endl;
        }
    } while (choice != 4);

    return 0; 
}
