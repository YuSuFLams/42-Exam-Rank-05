/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:50:32 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 00:55:18 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
        ASpell();
        ASpell(ASpell const &src);
        ASpell &operator=(ASpell const &src);
    public:
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        std::string const &getName() const;
        std::string const &getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &target) const;
};