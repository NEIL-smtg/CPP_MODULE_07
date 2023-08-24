/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:11:28 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 22:52:55 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template<class T>
Array<T>::Array() : length(0), arr(NULL){}

template<class T>
Array<T>::Array(unsigned int length)
: length(length)
{
	arr = new T[length];
}

template<class T>
Array<T>::~Array()
{
	if (this->arr)
		delete[] this->arr;
}


template<class T>
Array<T>::Array(Array<T>& other)
{
	if (this == &other)
		return ;
	this->length = other.length;
	this->arr = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++)
		this->arr[i] = other.arr[i];
}

template<class T>
Array<T>&	Array<T>::operator=(Array<T>& other)
{
	if (this == &other)
		return *this;
	this->length = other.length;
	this->arr = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++)
		this->arr[i] = other.arr[i];
	return *this;	
}

template<class T>
T&	Array<T>::operator[](int index)
{
	if (index < 0)
		throw OutOfBoundException();
	else if (static_cast<unsigned int>(index) > this->length - 1)
		throw OutOfBoundException();
	else
		return (this->arr[index]);
}

template<class T>
unsigned int Array<T>::size() const
{
	return this->length;
}

template<class T>
void	Array<T>::printArr()
{
	for (unsigned int i = 0; i < this->length; i++)
	{
		std::cout << arr[i];
		if (i + 1 < this->length)
			std::cout << ", ";
	}
	std::cout << "\n\n";
}

template<class T>
const char	*Array<T>::OutOfBoundException::what() const throw()
{
	return "Index out of bounds\n";
}

#endif
