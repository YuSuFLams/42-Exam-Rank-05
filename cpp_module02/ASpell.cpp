/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:57:48 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:02:12 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects) {}

ASpell::ASpell(const ASpell &src) { *this = src; }

ASpell::~ASpell() {}

ASpell &ASpell::operator=(const ASpell &src) {
    if (this != &src) {
        this->name = src.getName();
        this->effects = src.getEffects();
    }
    return *this;
}

std::string const &ASpell::getName() const { return this->name;}

std::string const &ASpell::getEffects() const { return this->effects;}

void ASpell::launch(const ATarget &target) const { target.getHitBySpell(*this); }