/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:05:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:20:34 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class ASpell;

class ATarget
{
    private:
        std::string type;
        ATarget();
        ATarget(ATarget const &src);
        ATarget &operator=(ATarget const &src);
    public:
        ATarget(std::string const &type);
        virtual ~ATarget();
        std::string const &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
};