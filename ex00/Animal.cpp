/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:29:13 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/26 00:00:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(std::string type) : type(type){};

const std::string& Animal::getType() const
{
    return (type);
}
void    Animal::setType(std::string type) {
    this->type = type;
}
Animal::Animal(const Animal& Copy){ *this = Copy; }

void  Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal& Animal::operator=(const Animal& Copy) {new(this) Animal(Copy);return (*this);}

Animal::~Animal()
{
    
}