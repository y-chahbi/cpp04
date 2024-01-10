/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:31:07 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/10 11:08:18 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;


    /******************************/
    
    // Animal  *Arry[100];
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i < 50)
    //         Arry[i] = new Cat();
    //     else
    //         Arry[i] = new Dog();
    // }
    
    // for (int i = 0; i < 100; i++)
    //     delete Arry[i];
    
    /******************************/

    // Brain *lus = new Brain();
    
    // for (int i = 0; i < 100; i++)
    //     lus->setIdea("brain", i);
    // std::cout << lus->getIdea(30) << std::endl;
    // delete lus;

    /*****************************/

    // Cat     *hello = new Cat();
    // Brain   *min = new Brain();
    
    // for (int i = 0; i < 100; i++)
    //     min->setIdea("My barin", i);
    
    // hello->setBrain(min);
    
    // const Brain *tmp = hello->getBrain();
    // std::cout << tmp->getIdea(56);
    
    // delete hello;
    // delete min;
    
    return 0;
}