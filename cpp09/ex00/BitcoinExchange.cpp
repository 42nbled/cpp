/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:00 by nbled             #+#    #+#             */
/*   Updated: 2023/09/07 18:13:39 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <fstream>

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    _input = other._input;
    return *this;
}

template <typename KeyType, typename ValueType>
void printMap(const std::map<KeyType, ValueType>& myMap) {
    for (typename std::map<KeyType, ValueType>::const_iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
}

void BitcoinExchange::get_data()
{
	std::ifstream 	fd;
	std::string 	str;
	std::string 	date;
	float 			value;

	fd.open("./data.csv");
	if (!fd.is_open())
		throw std::runtime_error("Error: Failed to open \"data.csv\"");
	std::getline(fd, str);
	while (std::getline(fd, str))
	{
		size_t pos = str.find(',');
		date = str.substr(0, pos);
		value = static_cast<float>(std::atof(str.substr(pos + 1).c_str()));
		_data.insert(std::make_pair(date, value));
	}
	printMap(_data);
}
