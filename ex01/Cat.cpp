/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/26 00:35:26 by ychahbi          ###   ########.fr       */
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