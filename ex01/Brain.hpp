/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:40:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/26 00:48:31 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string* ideas[100];
    public:
        Brain();
        Brain(std::string);
        Brain(const Brain& Copy);
        Brain& operator=(const Brain& Copy);
        virtual ~Brain();
};

#endif