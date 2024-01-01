/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:40:19 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/26 00:44:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& Copy){ *this = Copy; }

Brain& Brain::operator=(const Brain& Copy) {new(this) Brain(Copy);return (*this);}

Brain::~Brain(){  std::cout << "Brain Destructors Called" << std::endl;}