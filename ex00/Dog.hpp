/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:46 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/23 17:57:34 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : Animal
{
    Dog();
    Dog(std::string);
    Dog(const Dog& Copy);
    Dog& operator=(const Dog& Copy);
    ~Dog();
};

#endif