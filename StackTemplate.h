//
// Created by CorneliaCFranke on 22.07.2023.
//

#ifndef KLAUSURTRAINING_STACKTEMPLATE_H
#define KLAUSURTRAINING_STACKTEMPLATE_H

#include <stdexcept>

template<typename T>
class Stack{
public:
    static const unsigned int MaxStackSize{100};
    Stack(){};
    void push(const T& item);
    const T& top() const;
    void pop();
    unsigned int size();
    bool isEmpty();
    bool isFull();
private:
    int topIndex{-1};
    T stackStorage[MaxStackSize];
};

template<typename T>
void Stack<T>::push(const T& item){
    if (topIndex == MaxStackSize-1)
        throw std::overflow_error("Stack full");
    stackStorage[++topIndex] = item;
}
template<typename T>
void Stack<T>::pop(){
    if (topIndex == -1)
        throw std::underflow_error("Stack empty");
    topIndex--;
}
template<typename T>
const T& Stack<T>::top() const{
    if (topIndex == -1) throw
                std::underflow_error("Stack empty");
    return (stackStorage[topIndex]);
}
template<typename T>
unsigned int Stack<T>::size(){
    return (topIndex + 1);
}
template<typename T>
bool Stack<T>::isEmpty(){
    return (topIndex == -1);
}
template<typename T>
bool Stack<T>::isFull(){
    return (topIndex == MaxStackSize-1 );
}

#endif //KLAUSURTRAINING_STACKTEMPLATE_H
