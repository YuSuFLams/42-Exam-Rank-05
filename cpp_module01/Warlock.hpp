/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:43:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:37:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map <std::string , ASpell *> spells;
        
        Warlock();
        Warlock(Warlock const &src);
        Warlock &operator=(Warlock const &src);
    
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        
        std::string const &getName() const;
        std::string const &getTitle() const;
        
        void setTitle(std::string const &title);
        
        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const &target);
};