/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:34:36 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/06 11:13:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string name;
    public:
        Cure(const Cure &Copy);
        Cure &operator=(const Cure &Copy);
        Cure();
        void                setName(std::string);
        std::string const & getName() const;
        AMateria*           clone() const;
        void                use(ICharacter& target);
        ~Cure();
};

#endif