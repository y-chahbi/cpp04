/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:04:06 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/06 11:10:50 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   hold[4];
        int         mpty[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &Copy);
        MateriaSource &operator=(const MateriaSource &Copy);
        void        learnMateria(AMateria*);
        void        setEmpty(int, int);
        int         getEmpty();
        AMateria*   getHold(int);
        void        setHold(AMateria*, int);
        AMateria*   createMateria(std::string const & type);
        ~MateriaSource();
};

#endif