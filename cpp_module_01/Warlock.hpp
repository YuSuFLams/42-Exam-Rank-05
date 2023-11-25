/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:07:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:17:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ASpell.hpp"
# include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map < std::string, ASpell * > m_obj;
        
        Warlock();
        Warlock(const Warlock &cpy);
        Warlock &operator=(const Warlock &obj);
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        const std::string &getName( void ) const;
        const std::string &getTitle( void ) const;
        
        void setTitle(const std::string title);

        void introduce() const;

        void learnSpell(ASpell *obj);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &object);
};