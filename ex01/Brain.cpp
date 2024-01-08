/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:40:19 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 13:12:38 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain& Copy){
    *this = Copy;
}

Brain& Brain::operator=(const Brain& Copy) {
    for (int i = 0; i < 100; i++) {
        this->setIdea(Copy.getIdea(i), i);
    }
    return (*this);
}

std::string Brain::getIdea(int index) const {
    return this->ideas[index];
}

void    Brain::setIdea(std::string idea, int index) {
    this->ideas[index] = idea;
}

Brain::~Brain(){
    std::cout << "Brain Destructors Called" << std::endl;
}