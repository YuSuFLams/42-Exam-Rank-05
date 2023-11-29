/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:56:31 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:02:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell &src);
        ASpell &operator=(const ASpell &rhs);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(const ATarget &target) const;
};

#include "ATarget.hpp"