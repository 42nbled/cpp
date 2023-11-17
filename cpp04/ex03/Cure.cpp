/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:19 by nbled             #+#    #+#             */
/*   Updated: 2023/11/17 13:39:23 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "-Cure constructor called-" << std::endl;
    _type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "-Cure copy constructor called-" << std::endl;
    _type = other._type;
}

Cure::~Cure()
{
    std::cout << "-Cure destructor called-" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    _type = other._type;
    return *this;
}

Cure* Cure::clone(void)const
{
    return (new Cure(*this));
}

/*
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target << ">’s wounds *" << std::endl;
}*/