/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:19:28 by nbled             #+#    #+#             */
/*   Updated: 2023/10/26 01:46:27 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <algorithm>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	MutantStack()
	{
		std::cout << "-MutantStack default constructor called-" << std::endl;
	};
	MutantStack(const MutantStack &src)
	{
		std::cout << "-MutantStack copy constructor called-" << std::endl;
		*this = src;
	};
	virtual ~MutantStack()
	{
		std::cout << "-MutantStack destructor called-" << std::endl;
	};

	MutantStack & operator=(const MutantStack &rhs)
	{
		*this = &rhs;
	};

	typedef typename std::deque<T>::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif
