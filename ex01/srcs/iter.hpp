/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 03:25:27 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 20:59:48 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	print(T *addr, size_t N)
{
	for (size_t i = 0; i < N; i++)
		std::cout << addr[i] << ", ";
	std::cout << std::endl;
}

template<typename T>
void	add(T &a, T &b)
{
	a += b;
}

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void	iter(T* addr, size_t length, void (*apply)(T&, T&))
{
	for (size_t i = 0; i < length; i++)
		if (i + 1 < length)
			apply(addr[i], addr[i + 1]);
}

/*	
	reason to use size_t for length is beacause
	if the array that passed into this template is a double,
	it would identify T length as double length
*/
#endif
