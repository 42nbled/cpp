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

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    int intVectorData[] = {1, 2, 3, 4, 5};
    std::vector<int> intVector(intVectorData, intVectorData + sizeof(intVectorData) / sizeof(intVectorData[0]));

    int intListData[] = {10, 20, 30, 40, 50};
    std::list<int> intList(intListData, intListData + sizeof(intListData) / sizeof(intListData[0]));

    easyfind(intVector, 3);
	easyfind(intList, 25);

    return 0;
}
