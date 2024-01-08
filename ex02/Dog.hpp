/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:46 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 13:16:09 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    protected:
        Brain   *DogBrain;
    public:
        Dog();
        Dog(std::string);
        Dog(const Dog& Copy);
        Dog& operator=(const Dog& Copy);
        void            makeSound() const;
        const Brain     *getBrain() const;
        ~Dog();
};

#endif