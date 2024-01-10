/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:46 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 10:57:11 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
    protected:
        Brain   *DogBrain;
    public:
        Dog();
        Dog(std::string);
        Dog(const Dog& Copy);
        Dog& operator=(const Dog& Copy);

        const Brain     *getBrain() const;
        void            setBrain(Brain *);
        void            makeSound() const;
        ~Dog();
};

#endif