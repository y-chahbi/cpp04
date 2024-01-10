/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:40:19 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 10:58:43 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
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
    if (index >= 0 && index < 100)
        return this->ideas[index];
    else
        return ((std::cout << "The index " << index << " must be in this Rang (0 to 100)"
            << " So that the return will be the First idea" << std::endl), this->ideas[0]);
}

void    Brain::setIdea(std::string idea, int index) {
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
    else
        std::cout << idea << " Didn't set because of the index " << index << " must be in this Rang (0 to 100)" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructors Called" << std::endl;
}