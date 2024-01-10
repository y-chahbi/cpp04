/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:52:02 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 11:44:30 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

void AMateria::setType(std::string type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return type;
}

AMateria &AMateria::operator=(const AMateria &Copy)
{
    if (this != &Copy)
    {
        this->setType(Copy.getType());
    }
    return (*this);
}

AMateria::AMateria(const AMateria &Copy)
{
    *this = Copy;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria just called " << target.getName() << std::endl;
}

AMateria::~AMateria(){}