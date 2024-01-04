/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:45:25 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/04 17:48:06 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    name = "Ice";
}

void Ice::setName(std::string name)
{
    this->name = name;   
}

std::string const & Ice::getName() const
{
    return (name);
}

AMateria* Ice::clone() const
{
    Ice *tmp;
    tmp = new Ice(*this);
    return (tmp);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << getName() << " *" << std::endl;
}