#pragma once
#include "ConsoleApplication8.cpp"
class Stack
{
private:
    int data[SIZE]; // ����� ��� ��������� �������� �����
    int top; // ������ ��������� ��������

public:
    Stack() {
        top = -1; // ����������� ����� (�� ������)
    }

    // ��������� �������� � ����
    void push(int value) {
        if (top < SIZE - 1) {
            data[++top] = value;
        }
        else {
            std::cout <<"The stack is full. Cannot add element." << std::endl;
        }
    }

    // ��������� ��������� �������� � �����
    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            std::cout << "Stack is empty. Unable to remove element." << std::endl;
        }
    }

    // ���������� ��������� �������� �����
    int topElement() {
        if (top >= 0) {
            return data[top];
        }
        else {
            std::cout << "Stack is empty. Could not get top element." << std::endl;
            return -1; // �� �������� ��������, ��� ���� ���� ������ �� �������� ��� ���� ��������
        }
    }
};



