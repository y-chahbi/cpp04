/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:41 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/01 23:50:12 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    setType("Dog");
    std::cout << "Dog Constructors is Called" << std::endl;
}
Dog::Dog(std::string name) : Animal(name){
}

Dog::Dog(const Dog& Copy){ *this = Copy; }

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Dog& Dog::operator=(const Dog& Copy) {new(this) Dog(Copy);return (*this);}

Dog::~Dog(){std::cout << "Dog Destructors Called" << std::endl;}