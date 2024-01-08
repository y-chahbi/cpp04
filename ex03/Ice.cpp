/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:45:25 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 15:01:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    setType("ice");
}

AMateria* Ice::clone() const
{
    Ice *tmp;
    tmp = new Ice(*this);
    tmp->setType(type);
    return (tmp);
}

Ice &Ice::operator=(const Ice &Copy)
{
    if (this != &Copy)
    {
        this->setType(Copy.getType());
    }
    return (*this);
}

Ice::Ice(const Ice &Copy)
{
    *this = Copy;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(){}