/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:03:21 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 15:35:02 by ychahbi          ###   ########.fr       */
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

AMateria*       Character::getSlot(int i) const
{
    return (slot[i]);
}

Character& Character::operator=(const Character& Copy)
{
    if (this != &Copy)
    {
        for (int i = 0; i < 4; i++)
        {
            this->empty[i] = Copy.getEmpty(i);
            if (Copy.getSlot(i))
                this->slot[i]  = Copy.getSlot(i)->clone();
            else
                this->slot[i]  = NULL;
            this->setName(Copy.getName());
        }
    }
    return (*this);
}

Character::Character(const Character& Copy)
{
    *this = Copy;
}

const int & Character::getEmpty(int dex) const
{
    return (empty[dex]);
}

void    Character::setEmpty(int j, int l)
{
    this->empty[j] = l;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (getEmpty(i) == 0 && m)
        {
            slot[i] = m->clone();
            setEmpty(i, 1);
            break;
        }
    }
}
        
void Character::unequip(int idx)
{
    if (getEmpty(idx) == 1)
    {
        slot[idx] = 0;
        setEmpty(idx, 1);
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx > -1)
    {
        if (slot[idx])
        {
            slot[idx]->use(target);
        }
    }
}

        
Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete slot[i];
}