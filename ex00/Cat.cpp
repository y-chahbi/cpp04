/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:39:44 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/23 18:04:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructors is Called" << std::endl;
    setType("Cat");
}
Cat::Cat(std::string name) {setType(name);}
Cat::Cat(const Cat& Copy){ *this = Copy; }
Cat& Cat::operator=(const Cat& Copy) {new(this) Cat(Copy);return (*this);}
Cat::~Cat(){}