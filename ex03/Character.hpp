/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:03:19 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 15:10:56 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string     name;
        AMateria*       slot[4];
        int             empty[4];      
    public:
        Character();
        Character(std::string);
        std::string const & getName() const;
        Character(const Character& Copy);
        Character& operator=(const Character& Copy);
        void        setName(std::string);
        void        equip(AMateria* m);
        void        unequip(int idx);
        AMateria*   getSlot(int) const;
        const       int &getEmpty(int) const;
        void        setEmpty(int, int);
        void        use(int idx, ICharacter& target);
        ~Character();
};

#endif