/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:32 by nbled             #+#    #+#             */
/*   Updated: 2023/11/17 13:50:11 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

#define GRAY "\x1b[37;1m"
#define END "\033[0m"

int main()
{
    std::cout << GRAY << std::endl;
    std::cout << "+-------------------------------------------------+" << std::endl;
    std::cout << "|                   CURE TEST                     |" << std::endl;
    std::cout << "+-------------------------------------------------+" << std::endl;
    std::cout << END << std::endl;
    {
        const AMateria* test = new Cure();
        const AMateria* clone = test->clone();
        std::cout << test->getType() << std::endl;
        std::cout << clone->getType() << std::endl;
        delete test;
        delete clone;
    }
    std::cout << GRAY << std::endl;
    std::cout << "+-------------------------------------------------+" << std::endl;
    std::cout << "|                   ICE TEST                      |" << std::endl;
    std::cout << "+-------------------------------------------------+" << std::endl;
    std::cout << END << std::endl;
    {
        const AMateria* test = new Ice();
        const AMateria* clone = test->clone();
        std::cout << test->getType() << std::endl;
        std::cout << clone->getType() << std::endl;
        delete test;
        delete clone;
    }

    return 0;
}
