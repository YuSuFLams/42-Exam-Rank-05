/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:29:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:25:28 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string type;
    public:
        ATarget();
        ATarget(const ATarget &cpy);
        ATarget(const std::string &type);
        ATarget &operator=(const ATarget &ocj);
        virtual ~ATarget();
        
        const std::string &getType( void ) const;

        virtual ATarget *clone() const = 0;

        void	getHitBySpell(const ASpell &obj) const;
};
