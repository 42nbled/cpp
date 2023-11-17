/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:16 by nbled             #+#    #+#             */
/*   Updated: 2023/11/17 13:45:55 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& other);
        ~Ice();

        Ice& operator=(const Ice& other);

        Ice* clone()const;
        //void use(ICharacter& target);
};

#endif