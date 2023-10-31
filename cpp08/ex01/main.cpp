/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:19:10 by nbled             #+#    #+#             */
/*   Updated: 2023/10/20 09:37:03 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    try
	{
        Span span(5);

        span.addNumber(5);
        span.addNumber(3);
        span.addNumber(9);
        span.addNumber(1);
        span.addNumber(7);
        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	try
	{
        Span span(5);

        span.addNumber(5);
        span.addNumber(3);
        span.addNumber(9);
        span.addNumber(1);
        span.addNumber(7);
        span.addNumber(11);
        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
