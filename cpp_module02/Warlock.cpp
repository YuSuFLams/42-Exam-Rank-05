/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:30:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:46:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) { std::cout << this->name << ": My job here is done!" << std::endl; 
    std::map<std::string, ASpell *>::iterator it = obj.begin();
    std::map<std::string, ASpell *>::iterator ite = obj.end();
    while (it != ite) {
        delete it->second;
        ++it;
    }
    this->obj.clear();
}

std::string const &Warlock::getName(void) const { return this->name; }

std::string const &Warlock::getTitle(void) const { return this->title; }

void Warlock::setTitle(std::string const &title) { this->title = title; }

void Warlock::introduce(void) const 
{ std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; }

void Warlock::learnSpell(ASpell *spell) { this->spellbook.learnSpell(spell); }

void Warlock::forgetSpell(std::string const &spellName) { this->spellbook.forgetSpell(spellName); }

void Warlock::launchSpell(std::string const &spellName, ATarget const &target) {
    ATarget const *test = 0;
    if (test == &target)
        return ;
    ASpell *spell = spellbook.createSpell(spellName);
    if (spell)
        spell->launch(target);
}
