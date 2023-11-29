/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:11:05 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:20:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void){}

ATarget::~ATarget(void){}

ATarget::ATarget(ATarget const & src){ *this = src;}

ATarget::ATarget(std::string const &type):type(type){}

ATarget & ATarget::operator=(ATarget const & rhs)
{
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

std::string const &ATarget::getType() const { return (this->type);}

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
