/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 12:56:59 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructors is Called" << std::endl;
    setType("Cat");
}

Cat::Cat(std::string name) : Animal(name){
    std::cout << "Cat Param Constructors is Called" << std::endl;
}

Cat::Cat(const Cat& Copy){ *this = Copy; }

void    Cat::makeSound() const
{
    std::cout << "Meaw" << std::endl;
}

Cat& Cat::operator=(const Cat& Copy) {
    this->setType(Copy.getType());
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat Destructors Called" << std::endl;
}


/************************************/

/*
WrongCat::WrongCat(){
    std::cout << "WrongCat Constructors is Called" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(std::string name) : type(name){}

WrongCat::WrongCat(const WrongCat& Copy){ *this = Copy; }

void    WrongCat::setType(std::string type) {
    this->type = type;
}

const std::string& WrongCat::getType() const
{
    return (type);
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Meaw" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& Copy) {new(this) WrongCat(Copy);return (*this);}

WrongCat::~WrongCat(){std::cout << "WrongCat Destructors Called" << std::endl;}

*/