/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:38:41 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 15:00:29 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    setType("cure");
}

AMateria* Cure::clone() const
{
    Cure *tmp;
    tmp = new Cure(*this);
    tmp->setType(type);
    return (tmp);
}

Cure &Cure::operator=(const Cure &Copy)
{
    if (this != &Copy)
    {
        this->setType(Copy.getType());
    }
    return (*this);
}

Cure::Cure(const Cure &Copy)
{
    *this = Copy;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure(){}