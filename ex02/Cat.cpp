/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 11:01:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    setType("Cat");
    CatBrain = new Brain;
    std::cout << "Cat Constructors is Called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name){
    setType("Cat");
    CatBrain = new Brain;
}

Cat::Cat(const Cat& Copy) : Animal(){
    CatBrain = new Brain;
    *this = Copy;
}

void    Cat::makeSound() const
{
    std::cout << "Meaw" << std::endl;
}

Cat& Cat::operator=(const Cat& Copy) {
    delete CatBrain;
    CatBrain = new Brain();
    for (int i = 0; i < 100; i++) {
        CatBrain->setIdea(Copy.getBrain()->getIdea(i), i);
    }
    return (*this);
}

void    Cat::setBrain(Brain *tmp) {
    delete CatBrain;
    CatBrain = new Brain();
    for (int i = 0; i < 100; i++) {
        CatBrain->setIdea(tmp->getIdea(i), i);
    }
}

const Brain   *Cat::getBrain() const {
    return this->CatBrain;
}

Cat::~Cat() {
    delete CatBrain;
    std::cout << "Cat Destructors Called" << std::endl;
}