/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:41 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 13:08:10 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    setType("Dog");
    DogBrain = new Brain;
    std::cout << "Dog Constructor is Called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name){
    std::cout << "Dog Constructor is Called" << std::endl;
    setType("Dog");
    DogBrain = new Brain;
}

Dog::Dog(const Dog& Copy) : Animal(){
    DogBrain = new Brain;
    *this = Copy;
}

void    Dog::makeSound() const
{
    std::cout << "3aw" << std::endl;
}

Dog& Dog::operator=(const Dog& Copy) {
    delete DogBrain;
    DogBrain = new Brain();
    for (int i = 0; i < 100; i++) {
        DogBrain->setIdea(Copy.getBrain()->getIdea(i), i);
    }
    return (*this);
}

const Brain   *Dog::getBrain() const {
    return this->DogBrain;
}

Dog::~Dog() {
    std::cout << "Dog Destructor Called" << std::endl;
}