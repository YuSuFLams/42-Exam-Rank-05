/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:39:12 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 17:14:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Warlock
{
    private:
        std::string name;
        std::string title;
        
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
};