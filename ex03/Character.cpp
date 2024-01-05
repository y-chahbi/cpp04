/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:03:21 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/05 10:42:44 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        empty[i] = 0;
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        empty[i] = 0;
}

std::string const & Character::getName() const
{
   return (name);
}

void    Character::setName(std::string name)
{
    this->name = name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (getEmpty(i) == 0)
        {
            slot[i] = m;
            setEmpty(i, 1);
            break;
        }
    }
}

AMateria*       Character::getSlot(int i) const
{
    return (slot[i]);
}

Character::Character(const Character& Copy) {
    for (int i = 0; i < 4; i++)
    {
        this->empty[i] = Copy.getEmpty(i);
        this->slot[i]  = Copy.getSlot(i);
        this->setName(Copy.getName());
    }
}

Character& Character::operator=(const Character& Copy)
{
    Character   *tmp = new Character();
    for (int i = 0; i < 4; i++)
    {
        tmp->empty[i] = Copy.getEmpty(i);
        tmp->slot[i]  = Copy.getSlot(i);
        tmp->setName(Copy.getName());
    }
    return (*tmp);
}

const int & Character::getEmpty(int dex) const
{
    return (empty[dex]);
}

void    Character::setEmpty(int j, int l)
{
    this->empty[l] = j;
}

        
void Character::unequip(int idx)
{
    (void)idx;
    for (int i = 0; i < 4; i++)
    {
        if (getEmpty(i) == 1)
        {
            slot[i] = 0;
            setEmpty(i, 1);
            break;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx > -1)
    {
            slot[idx]->use(target);
    }
}

        
Character::~Character()
{
    
}