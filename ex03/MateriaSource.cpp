/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:04:02 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/05 10:41:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        mpty[i] = 0;
}

void MateriaSource::setHold(AMateria* mt, int i)
{
    hold[i] = mt;
}

AMateria* MateriaSource::getHold(int i)
{
    return (hold[i]);
}

void MateriaSource::learnMateria(AMateria* mt)
{
    for (int i = 0; i < 4; i++)
    {
        if (mpty[i] == 0)
        {
            setHold(mt, i);
            mpty[i] = 1;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        AMateria *tmp = getHold(i);
        if (tmp->getType() == type)
            return (tmp);
    }
    return (0);
}

MateriaSource::~MateriaSource(){}