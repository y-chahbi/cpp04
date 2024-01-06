/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/02 01:28:41 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructors is Called" << std::endl;
    setType("Cat");
}

Cat::Cat(std::string name) : Animal(name){}

Cat::Cat(const Cat& Copy){ *this = Copy; }

void    Cat::makeSound() const
{
    std::cout << "Meaw" << std::endl;
}

Cat& Cat::operator=(const Cat& Copy) {new(this) Cat(Copy);return (*this);}

Cat::~Cat(){std::cout << "Cat Destructors Called" << std::endl;}


/************************************/


WrongCat::WrongCat(){
    std::cout << "WrongCat Constructors is Called" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name){}

WrongCat::WrongCat(const WrongCat& Copy){ *this = Copy; }

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Meaw" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& Copy) {new(this) WrongCat(Copy);return (*this);}

WrongCat::~WrongCat(){std::cout << "WrongCat Destructors Called" << std::endl;}