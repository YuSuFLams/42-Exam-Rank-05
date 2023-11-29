/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:28:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:46:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>

#include "SpellBook.hpp"
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> obj;

        Warlock();
        Warlock(Warlock const &src);
        Warlock &operator=(Warlock const &rhs);

        SpellBook spellbook;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        void launchSpell(std::string const &spellName, ATarget const &target);
};