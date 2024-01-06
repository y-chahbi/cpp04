/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:04:02 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/06 11:46:10 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        mpty[i] = 0;
}

void MateriaSource::setHold(AMateria* mt, int i)
{
    AMateria*   tmp = mt->clone();
    //std::cout << tmp << " | " << mt << " | " << tmp->getType() << "|" << mt->getType() << std::endl;
    hold[i] = tmp;
}

AMateria* MateriaSource::getHold(int i)
{
    return (hold[i]);
}

void MateriaSource::learnMateria(AMateria* mt)
{
    for (int i = 0; i < 4; i++)
    {
        if (mpty[i] == 0 && mt)
        {
            setHold(mt, i);
            mpty[i] = 1;
            break;
        }
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &Copy)
{
    if (this != &Copy)
    {
        for (int i = 0; i < 4; i++)
        {
            this->hold[i] = Copy.hold[i];
            this->mpty[i] = Copy.mpty[i];
        }
    }
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &Copy)
{
    *this = Copy;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        AMateria *tmp = hold[i];
        if (tmp && tmp->getType() == type)
            return (tmp);
    }
    return (0);
}

MateriaSource::~MateriaSource(){}