/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:49 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/02 01:37:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    private:
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat& Copy);
        Cat& operator=(const Cat& Copy);
        virtual void    makeSound() const;
        ~Cat();
};


/***********************/

class WrongCat : virtual public WrongAnimal
{
    private:
    public:
        WrongCat();
        WrongCat(std::string);
        WrongCat(const WrongCat& Copy);
        WrongCat& operator=(const WrongCat& Copy);
        void    makeSound() const;
        ~WrongCat();
};

#endif