/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:49 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 10:45:50 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
    protected:
        Brain   *CatBrain;
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat& Copy);
        Cat& operator=(const Cat& Copy);

        const Brain     *getBrain() const;
        void            setBrain(Brain *);
        void            makeSound() const;
        ~Cat();
};

#endif