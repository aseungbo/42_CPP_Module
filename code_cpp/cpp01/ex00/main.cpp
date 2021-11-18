/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:12 by seuan             #+#    #+#             */
/*   Updated: 2021/11/18 14:37:10 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name[3] = {"James", "john", "Bryan"};

    for (int i = 0; i < 3; i++)
        randomChump(name[i]);
    return(0);
}