/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:04:19 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 22:36:50 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<class T>
class Array
{
	private:
		unsigned int	length;
		T	*arr;
	public:
		Array();
		Array(unsigned int length);
		~Array();
		Array(Array& other);
		Array& operator=(Array& other);
		T&	operator[](int index);
		unsigned int size() const;
		void	printArr();

		class OutOfBoundException : public std::exception
		{
			public :
				const char *what() const throw();
		};
};

# include "Array.tpp"

#endif
