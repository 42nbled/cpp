/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:11:55 by nbled             #+#    #+#             */
/*   Updated: 2023/09/07 18:13:38 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
    public:
        BitcoinExchange() {};
		BitcoinExchange(std::string input) {_input = input;};
        BitcoinExchange(const BitcoinExchange& other) {*this = other;};
        ~BitcoinExchange() {};

        BitcoinExchange& operator=(const BitcoinExchange& other);

		void	get_data(void);

	private :
		std::string						_input;
		std::map<std::string, float>	_data;

};


#endif
