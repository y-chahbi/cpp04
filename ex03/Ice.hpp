/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:45:23 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/04 17:46:38 by ychahbi          ###   ########.fr       */
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
        void setName(std::string);
        std::string const & getName() const;
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif