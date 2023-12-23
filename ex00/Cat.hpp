/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:49 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/23 17:54:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : Animal
{
    private:
        
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat& Copy);
        Cat& operator=(const Cat& Copy);
        ~Cat();
};
#endif