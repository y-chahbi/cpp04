/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:29:13 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 11:36:36 by ychahbi          ###   ########.fr       */
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

Animal::Animal(const Animal& Copy) {
    *this = Copy;
}

Animal& Animal::operator=(const Animal& Copy) {
    if (this != &Copy){
        this->setType(Copy.getType());
    }
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal Destructors Called" << std::endl;
}