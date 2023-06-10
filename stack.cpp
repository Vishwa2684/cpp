#include <iostream>
//user defined stack
class Stack {
private:
    int tp = -1;
    int n = 100;
    std::string stack[100];

public:
    void push(std::string x) {
        if (tp == n - 1) {
            std::cout << "Stack overflow" << std::endl;
        }
        else {
            tp++;
            stack[tp] = x;
        }
    }

    std::string pop() {
        if (tp == -1) {
            std::cout << "Can't remove elements from stack" << std::endl;
            return "";
        }
        else {
            std::string x = stack[tp];
            tp--;
            return x;
        }
    }

    std::string top() {
        if (tp == -1) {
            std::cout << "Stack is empty" << std::endl;
            return "";
        }
        else {
            return stack[tp];
        }
    }

    void show() {
        if (tp == -1) {
            std::cout << "Stack is empty" << std::endl;
        }
        else {
            for (int i = tp; i >= 0; i--) {
                std::cout << stack[i] << " ";
            }
            std::cout << std::endl;
        }
    }

    bool isEmpty() {
        if (tp == -1) {
            return true;
        }
        return false;
    }

    bool isFull() {
        if (tp == n - 1) {
            return true;
        }
        return false;
    }
};

int main(){
Stack s;

}