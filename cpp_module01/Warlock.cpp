/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:44:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 02:08:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
        delete it->second;
    spells.clear();
}

std::string const &Warlock::getName() const
{
    return (this->name);
}

std::string const &Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        if(spells.find(spell->getName()) == spells.end())
            spells[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName)
{
    if (spells.find(spellName) != spells.end())
        spells.erase(spells.find(spellName));
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
    if (spells.find(spellName) != spells.end())
        spells[spellName]->launch(target);
}
