/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:11:21 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:25:50 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell &cpy);
        ASpell &operator=(const ASpell &obj);
        virtual ~ASpell();

        const std::string &getName( void ) const;
        const std::string &getEffects( void ) const;

        virtual ASpell *clone() const = 0;

        void launch(const ATarget &obj) const;
};
