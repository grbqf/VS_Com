#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

namespace shg
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& data = T())
			:_data(data)
			, _next(nullptr)
			, _prev(nullptr)
		{

		}
	};

	template<class T>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T> Self;
		Node* _node;

		list_iterator(Node* node)
			:_node(node)
		{

		}

		T& operator*()
		{
			return _node->_data;
		}
		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}
		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}
		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}
		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}

	};

	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef list_iterator<T> iterator;

		list()
			:size(0)
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
		}

		iterator begin()
		{
			return _head->_next;
		}

		iterator end()
		{
			return _head;
		}

		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);

		}
		//      new
		//   p  c
		//1  2  3  4  5  
		void insert(iterator pos, const T& x)
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* newnode = new Node(x);

			newnode->_next = prev->_next;
			newnode->_prev = prev;
			prev->_next = newnode;
			cur->_prev = newnode;

			_size++;
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		iterator erase(iterator pos)
		{
			assert(pos != end());
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* next = cur->_next;

			prev->_next = next;
			next->_prev = prev;

			delete pos._node;

			_size--;
			return next;
		}

		size_t size() const
		{
			return _size;
		}

		bool empty() const
		{
			return _size == 0;
		}

	private:
		Node* _head;
		size_t _size;
	};

	void test1()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		lt1.push_back(4);
		lt1.push_back(5);


	}

}

int main()
{
	shg::test1();
}