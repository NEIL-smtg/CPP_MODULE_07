/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 03:25:20 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 20:56:19 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	{
		std::cout << "ADDING\n" << std::endl;
		int	arr[10];
		
		for (int i = 0; i < 10; i++)
			arr[i] = i + 1;

		::print(arr, 10);
		::iter(arr, 10, add);
		::print(arr, 10);
	}
	{
		std::cout << "\n";
		char	ch[10];
		
		for (int i = 0; i < 10; i++)
			ch[i] = i + 48;

		::print(ch, 10);
		::iter(ch, 10, add);
		::print(ch, 10);
	}
	{
		std::cout << "\nSWAP\n" << std::endl;
		int	arr[10];
		
		for (int i = 0; i < 10; i++)
			arr[i] = i + 1;

		::print(arr, 10);
		::iter(arr, 10, swap);
		::print(arr, 10);
	}
	{
		std::cout << "\n";
		char	ch[10];
		
		for (int i = 0; i < 10; i++)
			ch[i] = i + 48;

		::print(ch, 10);
		::iter(ch, 10, swap);
		::print(ch, 10);
	}
	{
		std::cout << "\n";
		std::string	str[2];

		str[0] = "I like to eat banana";
		str[1] = "I like durian";

		::print(str, 2);
		::iter(str, 2, swap);
		::print(str, 2);
	}
	return (0);
}
