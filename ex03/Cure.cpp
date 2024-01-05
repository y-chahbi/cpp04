/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:38:41 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/05 10:39:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    name = "cure";
}

void Cure::setName(std::string name)
{
    this->name = name;   
}

std::string const & Cure::getName() const
{
    return (name);
}

AMateria* Cure::clone() const
{
    Cure *tmp;
    tmp = new Cure(*this);
    return (tmp);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure(){}