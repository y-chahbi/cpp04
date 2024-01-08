/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 13:08:39 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    setType("Cat");
    CatBrain = new Brain;
    std::cout << "Cat Constructor is Called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name){
    setType("Cat");
    std::cout << "Cat Param Constructor is Called" << std::endl;
    CatBrain = new Brain;
}

Cat::Cat(const Cat& Copy) : Animal(){
    CatBrain = new Brain;
    *this = Copy;
}

void    Cat::makeSound() const
{
    std::cout << "3aw" << std::endl;
}

Cat& Cat::operator=(const Cat& Copy) {
    delete CatBrain;
    CatBrain = new Brain();
    for (int i = 0; i < 100; i++) {
        CatBrain->setIdea(Copy.getBrain()->getIdea(i), i);
    }
    return (*this);
}

const Brain   *Cat::getBrain() const {
    return this->CatBrain;
}

Cat::~Cat() {
    std::cout << "Cat Destructor Called" << std::endl;
}