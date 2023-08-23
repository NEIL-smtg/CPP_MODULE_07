/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:37:19 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 03:23:07 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T&	min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T&	max(T &a, T &b)
{
	return ((a > b) ? a : b);
}

// namespace local{
// 	template <typename T>
// 	void	swap(T a, T b)
// 	{
// 		std::cout << a << "and" << b << std::endl;
// 	}
// }

#endif
