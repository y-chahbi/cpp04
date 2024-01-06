/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:29:13 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/02 01:17:10 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Constructors Called" << std::endl;
}

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

Animal::~Animal(){
    std::cout << "Animal Destructors Called" << std::endl;
}

/*******************************************************************/

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Constructors Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type){};

const std::string& WrongAnimal::getType() const
{
    return (type);
}
void    WrongAnimal::setType(std::string type) {
    this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal& Copy){ *this = Copy; }

void  WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& Copy) {new(this) WrongAnimal(Copy);return (*this);}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructors Called" << std::endl;
}