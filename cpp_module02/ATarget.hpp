/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:03:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:07:34 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    private:
        std::string type;

    public:
        ATarget();
        ATarget(std::string const &type);
        ATarget(const ATarget &src);
        ATarget &operator=(const ATarget &rhs);
        virtual ~ATarget();

        std::string const &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(const ASpell &spell) const;
};

#include "ASpell.hpp"