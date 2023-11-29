/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:51:49 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:52:19 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Warlock
{
  private:
    std::string _name;
    std::string _title;

    Warlock();
    Warlock(Warlock const &src);
    Warlock &operator=(Warlock const &rhs);

  public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    std::string const &getName() const;
    std::string const &getTitle() const;

    void setTitle(std::string const &title);

    void introduce() const;
};