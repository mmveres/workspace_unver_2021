// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
namespace univer {
	struct Student
	{
		int id;
		char name[20];
		Student(int id, char const* name) {
			this->id = id;
			strcpy_s(this->name, name);
		}
		char* to_str() {
			return (char *)(char(id) + name);
		}
	};

	Student operator + (Student const &c1, Student const &c2)
	{
		return Student(c1.id + c2.id, "NewSt");
	}

	std::ostream& operator<<(std::ostream& out, const Student& f)
	{
		return out << f.id << '/' << f.name<<'\n';
	}
	template<typename T>
	struct NodeList
	{
	private:
		struct Node
		{
			T* data;
			Node* next;
			Node(T& st) {
				data = &st;
				next = nullptr;
			}
		};
		Node* head = nullptr;
		Node* tail = nullptr;
	public:
		void addFirst(T & data) {
			Node* node = new Node(data);
			if (head == nullptr) {
				head = node;
				tail = node;
			}
			else {
				node->next = head;
				head = node;
			}
		};
		void addLast(T* data);
		void insertAfter(T& data, int id);
		void insertBefore(T& data, int id);
		T* del(int id);
		T* find(int id);
		void print() {
			Node* iter = head;
			while (iter != nullptr) {
				std::cout << *(iter->data);				
				iter = iter->next;
			}
		}
	};
	template<typename T>
	void NodeList::addLast(T* data) {
		Node* node = new Node(*data);
		if (head == nullptr) {
			head = node;
			tail = node;
		}
		else {
			tail->next = node;
			tail = node;

			/*Node* iter = head;
			while (iter->next != nullptr) {
				iter = iter->next;
			}
			iter->next = node;*/
		}
	}
	template<typename T>
	void NodeList::insertAfter(T& data, int id) {
		Node* node = new Node(data);
		Node* iter = head;
		while (iter->next != nullptr) {
			if ((*iter).data->id == id) {
				node->next = iter->next;
				iter->next = node;
			}
			iter = iter->next;
		}
	}
	template<typename T>
	void NodeList::insertBefore(T& data, int id) {
		Node* node = new Node(data);
		Node* iter = head;
		Node* prev = nullptr;
		while (iter->next != nullptr) {
			if ((*iter).data->id == id) {
				if (iter == head) {
					addFirst(data);
				}
				else {
					prev->next = node;
					node = iter;
					// addAfter(prev);
				}

			}
			prev = iter;
			iter = iter->next;
		}
	}
	template<typename T>
	Student* NodeList::del(int id) {
		Node* iter = head;
		Node* prev = nullptr;
		while (iter->next != nullptr) {
			if ((*iter).data->id == id) {
				prev->next = iter->next;
				Student* st = iter->data;
				delete iter;
				return st;
			}
			prev = iter;
			iter = iter->next;
		}
	}
	template<typename T>
	T* NodeList::find(int id) {
		Node* iter = head;
		while (iter->next != nullptr) {
			if (iter->data->id == id)
				return iter->data;
			iter = iter->next;
		}
	}
}
int main()
{
	univer::Student st(1, "Vasya");

	univer::NodeList<univer::Student> list;
	vector<int> v;

	list.addFirst(st);
	list.addFirst(*(new univer::Student(3, "Bob1")));
	list.addLast(new univer::Student(4, "Bob2"));
	list.addLast(new univer::Student(5, "Bob3"));

	list.print();
	/*univer::Student* st1 = new univer::Student(2, "Tom");
	delete st1;*/

	//	univer::NodeList st;
	std::cout << *(list.find(1));
	return 0;
}

//void univer::NodeList::addLast(Student* data) {
//}