/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:19:32 by nbled             #+#    #+#             */
/*   Updated: 2023/10/18 15:13:22 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm> // Include the <algorithm> header for std::sort

Span::Span()
    : _n(0)
{
    std::cout << "-Span default constructor called-" << std::endl;
}

Span::Span(unsigned int n)
    : _n(n)
{
    std::cout << "-Span constructor called-" << std::endl;
}

Span::Span(const Span& other)
    : _vector(other._vector), _n(other._n)
{
    std::cout << "-Span copy constructor called-" << std::endl;
}

Span::~Span()
{
    std::cout << "-Span destructor called-" << std::endl;
}

Span& Span::operator=(const Span& other)
{
    _vector = other._vector; // Copy the vector
    _n = other._n;         // Copy the value of _n
    return *this;
}

void Span::addNumber(int i)
{
    if (_vector.size() < _n)
        _vector.push_back(i);
    else
        throw (Span::class_full());
}

unsigned int Span::shortestSpan()
{
    if (this->_vector.size() > 1)
    {
        std::vector<int> sortedVector = _vector;
        std::sort(sortedVector.begin(), sortedVector.end());
        unsigned int shortest = static_cast<unsigned int>(sortedVector[1] - sortedVector[0]);
        for (size_t i = 2; i < sortedVector.size(); ++i)
        {
            unsigned int currentSpan = static_cast<unsigned int>(sortedVector[i] - sortedVector[i - 1]);
            if (currentSpan < shortest)
            {
                shortest = currentSpan;
            }
        }

        return shortest;
    }
    else
        throw (Span::not_enough());
}

unsigned int Span::longestSpan()
{
    if (this->_vector.size() > 1)
    {
        std::vector<int> sortedVector = _vector;
        std::sort(sortedVector.begin(), sortedVector.end());
        unsigned int longest = static_cast<unsigned int>(sortedVector.back() - sortedVector.front());
        return longest;
    }
    else
    {
        throw (Span::not_enough());
    }
}
