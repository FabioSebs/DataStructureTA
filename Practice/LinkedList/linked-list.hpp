// linked-list.h
#pragma once

// DECLARATION
namespace dsa
{
	template <typename T>
	class Node
	{
		T m_data;
		dsa::Node<T> *m_next;

	public:
		Node(T data, dsa::Node<T> *next);

		void setData(T data);

		T getData();
	};
}

// IMPLEMENTATION
template <typename T>
dsa::Node<T>::Node(T data, dsa::Node<T> *next)
{
	m_data = data;
	m_next = next;
};

template <typename T>
void dsa::Node<T>::setData(T data)
{
	m_data = data;
}

template <typename T>
T dsa::Node<T>::getData()
{
	return m_data;
}