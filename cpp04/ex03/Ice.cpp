/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:19 by nbled             #+#    #+#             */
/*   Updated: 2023/11/20 16:47:05 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
    std::cout << "-Ice constructor called-" << std::endl;
    _type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    std::cout << "-Ice copy constructor called-" << std::endl;
    _type = other._type;
}

Ice::~Ice()
{
    std::cout << "-Ice destructor called-" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    _type = other._type;
    return *this;
}

Ice* Ice::clone(void)const
{
    return (new Ice(*this));
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}