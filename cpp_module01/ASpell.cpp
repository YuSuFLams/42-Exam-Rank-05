/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:55:33 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:05:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void){}

ASpell::~ASpell(void){}

ASpell::ASpell(ASpell const & src){ *this = src;}

ASpell & ASpell::operator=(ASpell const & rhs){
    if (this != &rhs)
    {
        this->name = rhs.getName();
        this->effects = rhs.getEffects();
    }
    return *this;
}

ASpell::ASpell(std::string const &name, std::string const &effects): name(name), effects(effects){}

std::string const &ASpell::getName() const { return (this->name);}

std::string const &ASpell::getEffects() const { return (this->effects);}

void ASpell::launch(ATarget const &target) const { target.getHitBySpell(*this); }
