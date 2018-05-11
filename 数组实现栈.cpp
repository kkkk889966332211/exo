#include <iostream>

using namespace std;

template <class T>
class Stack {
private:
    static const int maxstack = 10;
    T entry[maxstack];
    int count;
    int stackSize;

    bool full() const {
      return stackSize == maxstack;
    }

public:
    Stack() : count(0), stackSize(0) {
      for (int i = 0; i < maxstack; i++)
        entry[i] = T();
    }

    void push(const T &val) {
      if (!full()) {
        entry[count] = val;
     ++count;
      ++stackSize;
      }
    }

    void pop() {
      if (!empty()) {
        --count;
        --stackSize;
      }
    }

    T top() const {
      if (!empty())
        return entry[count - 1];
    }

    bool empty() const {
      return stackSize == 0 && count == 0;
    }

    int size() const {
      return stackSize;
    }
};
