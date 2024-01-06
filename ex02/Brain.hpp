/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:40:21 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/02 15:37:53 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& Copy);
        Brain& operator=(const Brain& Copy);

        std::string getIdea(int index) const;
        void        setIdea(std::string idea, int index);

        virtual ~Brain();
};

#endif