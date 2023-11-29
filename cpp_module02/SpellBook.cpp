/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:18:11 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:46:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
    if (it != spells.end())
        delete it->second;    
    spells.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
    if (it != spells.end())
        return spells[spellName];
    return NULL;
}