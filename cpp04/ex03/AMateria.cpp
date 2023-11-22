/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:00 by nbled             #+#    #+#             */
/*   Updated: 2023/11/20 17:06:44 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "-AMateria default constructor called-" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "-AMateria constructor called-" << std::endl;
    _type = type;
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "-AMateria copy constructor called-" << std::endl;
    _type = other._type;
}

AMateria::~AMateria()
{
    std::cout << "-AMateria destructor called-" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    _type = other._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return(_type);
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}