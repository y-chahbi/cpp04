/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:52:00 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/06 11:04:44 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &Copy);
        AMateria &operator=(const AMateria &Copy);
        void                setType(std::string);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria*   clone() const = 0;
        virtual  void       use(ICharacter& target);
        virtual ~AMateria();
};

#endif