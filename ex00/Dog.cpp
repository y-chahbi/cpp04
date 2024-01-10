/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:41 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 09:48:39 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    setType("Dog");
    std::cout << "Dog Constructors is Called" << std::endl;
}
Dog::Dog(std::string name) : Animal(name){
    std::cout << "Dog Param Constructors is Called" << std::endl;
}

Dog::Dog(const Dog& Copy){
    *this = Copy;
}

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Dog& Dog::operator=(const Dog& Copy) {
    this->setType(Copy.getType());
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog Destructors Called" << std::endl;
}