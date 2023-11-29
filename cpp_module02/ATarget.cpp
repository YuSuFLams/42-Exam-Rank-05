/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:04:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:06:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type): type(type) {}

ATarget::~ATarget() {}

ATarget &ATarget::operator=(const ATarget &src) {
    if (this != &src)
        this->type = src.getType();
    return *this;
}

std::string const &ATarget::getType() const { return this->type;}

ATarget::ATarget(const ATarget &src) { *this = src; }

void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
