/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:36:47 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:27:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(): type("type") {}

ATarget::ATarget(const ATarget &cpy):type(cpy.getType()){}

ATarget::ATarget(const std::string &type):type(type) {}

ATarget &ATarget::operator=(const ATarget &obj)
{
    if (this != &obj)
        this->type = obj.getType();
    return (*this);
}

ATarget::~ATarget(){}

const std::string &ATarget::getType( void ) const {return this->type;}

void	ATarget::getHitBySpell(ASpell const &obj) const 
{std::cout << this->getType() << " has been " << obj.getEffects() <<"!" << std::endl;}