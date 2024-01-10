/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:29:13 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 10:19:49 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    setType("Animal");
    std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string type) : type(type){
    std::cout << "Animal Constructor Called" << std::endl;
};

const std::string& Animal::getType() const
{
    return (type);
}

void    Animal::setType(std::string type) {
    this->type = type;
}

Animal::Animal(const Animal& Copy) {
    *this = Copy;
}

void  Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal& Animal::operator=(const Animal& Copy) {
    this->setType(Copy.getType());
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal Destructors Called" << std::endl;
}