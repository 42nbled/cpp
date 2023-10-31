/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:19:28 by nbled             #+#    #+#             */
/*   Updated: 2023/10/18 15:13:25 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
void easyfind(T var, int i)
{
    typename T::iterator it = std::find(var.begin(), var.end(), i);

	try
	{
		if (it != var.end())
			std::cout << "Found value: " << *it << std::endl;
		else
			throw(std::exception());
	}
	catch (std::exception &e)
	{
		std::cerr << "Occurence not found for " << i << std::endl;
	}
}

#endif
