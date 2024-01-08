/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:04:02 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 15:22:18 by ychahbi          ###   ########.fr       */
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
            if (Copy.hold[i])
                this->hold[i] = Copy.hold[i]->clone();
            else
                this->hold[i] = NULL;
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
            return (tmp->clone());
    }
    return (0);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete hold[i];
}