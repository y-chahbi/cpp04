/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:31:07 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/02 01:37:56 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* fsf = new WrongCat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << fsf->getType() << " " << std::endl;
    i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    fsf->makeSound();
    // delete meta;
    // delete i;
    // delete j;
    return 0;
}