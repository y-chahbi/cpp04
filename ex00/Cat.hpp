/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:49 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 12:51:24 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat& Copy);
        Cat& operator=(const Cat& Copy);
        void    makeSound() const;
        ~Cat();
};


/***********************/
/*
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string);
        WrongCat(const WrongCat& Copy);
        WrongCat& operator=(const WrongCat& Copy);
        void    makeSound() const;
        void    setType(std::string);
        const   std::string& getType() const;
        ~WrongCat();
};

*/
#endif