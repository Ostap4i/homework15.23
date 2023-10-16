#pragma once
#include "ConsoleApplication8.cpp"
class Stack
{
private:
    int data[SIZE]; // Масив для зберігання елементів стеку
    int top; // Індекс верхнього елементу

public:
    Stack() {
        top = -1; // Ініціалізація стеку (він пустий)
    }

    // Додавання елементу в стек
    void push(int value) {
        if (top < SIZE - 1) {
            data[++top] = value;
        }
        else {
            std::cout <<"The stack is full. Cannot add element." << std::endl;
        }
    }

    // Видалення верхнього елементу зі стеку
    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            std::cout << "Stack is empty. Unable to remove element." << std::endl;
        }
    }

    // Повернення верхнього елементу стеку
    int topElement() {
        if (top >= 0) {
            return data[top];
        }
        else {
            std::cout << "Stack is empty. Could not get top element." << std::endl;
            return -1; // Це фіктивне значення, яке може бути змінене на відповідне для вашої програми
        }
    }
};



