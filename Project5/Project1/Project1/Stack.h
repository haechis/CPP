#pragma once

#ifndef _STACK_H_
#define _STACK_H_

class Stack
{
private:
	int idx;
	int* buff;
public:
	Stack(int sz = 10);
	~Stack();
	void push(int v);
	int pop();
};

#endif // _STACK_H_