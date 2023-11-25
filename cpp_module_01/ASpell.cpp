/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:19:07 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 17:49:39 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(): name("ASpell"), effects("ASpellEffects"){}

ASpell::~ASpell(){}

ASpell::ASpell(const std::string &name, const std::string &effects):name(name), effects(effects){}

ASpell::ASpell(const ASpell &cpy): name(cpy.getName()), effects(cpy.getEffects()) {}

ASpell &ASpell::operator=(const ASpell &obj)
{
    if (this != &obj)
    {
        this->name = obj.getName();
        this->effects = obj.getEffects();
    }
    return (*this);
}

const std::string &ASpell::getName( void ) const {return this->name;}

const std::string &ASpell::getEffects( void ) const {return this->effects;}

void ASpell::launch(const ATarget &obj) const {return obj.getHitBySpell(*this);}