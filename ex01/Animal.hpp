/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:29:15 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/08 13:09:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string);
        Animal(const Animal& Copy);
        Animal& operator=(const Animal& Copy);
        void                setType(std::string);
        const virtual std::string& getType() const;
        virtual void    makeSound() const;
        virtual ~Animal();
};

#endif