/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:16:55 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:19:15 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string, ASpell *> spells;
        
        SpellBook(SpellBook const &src);
        SpellBook &operator=(SpellBook const &rhs);
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        ASpell *createSpell(std::string const &spellName);
};