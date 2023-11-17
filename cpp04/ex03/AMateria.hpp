/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:55 by nbled             #+#    #+#             */
/*   Updated: 2023/11/17 13:37:37 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual ~AMateria();

        AMateria& operator=(const AMateria& other);

        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);

    protected:
        std::string _type;
};

#endif
 