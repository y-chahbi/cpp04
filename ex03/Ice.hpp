/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:45:23 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/06 11:15:04 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string name;
    public:
        Ice();
        Ice(const Ice &Copy);
        Ice &operator=(const Ice &Copy);
        void setName(std::string);
        std::string const & getName() const;
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif