// ConsoleApplication09.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//n! = n*(n-1)
int count_i = 0;
int fact_rec(int n) {
	count_i++;
	if (n == 0 || n == 1) return 1;
	return n * fact_rec(n - 1);
}
int fact_iter(int n) {
	int fact = 1;
	for (size_t i = 2; i <= n; i++)
	{
		count_i++;
		fact *= i;
	}
	return fact;
}
//fib(n)=fib(n-1)+fib(n-2)
int fib_rec(int n) {
	count_i++;
	if (n == 0 || n == 1) return 1;
	return fib_rec(n - 1) + fib_rec(n - 2);
}
int fib_iter(int n) {	
	int z(1), y(1), x(1);
	for (size_t i = 2; i <= n; i++)
	{
		count_i++;
		z = y + x;
		x = y;
		y = z;
	}
	return z;
}
struct my_stack {
	int arr[10];
	int i = -1;
	void push(int n) {
		arr[++i] = n;
	}
	int pop() {
		return arr[i--];
	}
	int top() {
		return arr[i];
	}
	int size() {
		return i + 1;
	}
};

int main()
{
	count_i = 0;
	cout << fact_iter(10)<<endl;
	cout << count_i << endl;
	count_i = 0;
	cout << fact_rec(10) << endl;
	cout << count_i << endl;

	count_i = 0;
	cout << fib_iter(20) << endl;
	cout << count_i << endl;
	count_i = 0;
	cout << fib_rec(20) << endl;
	cout << count_i << endl;

	my_stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);

	while (stack.size()>0)
	{
		cout << stack.pop();
	}

    return 0;
}

