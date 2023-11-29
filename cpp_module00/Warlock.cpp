/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:52:24 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:56:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void){}

Warlock::~Warlock(void){ std::cout << this->_name << ": My job here is done!" << std::endl;}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{ std::cout << this->_name << ": This looks like another boring day." << std::endl;}

Warlock::Warlock(Warlock const & src){ *this = src;}

Warlock & Warlock::operator=(Warlock const & rhs){
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_title = rhs.getTitle();
    }
    return *this;
}

std::string const &Warlock::getName(void) const { return this->_name;}

std::string const &Warlock::getTitle(void) const { return this->_title;}

void Warlock::setTitle(std::string const &title) { this->_title = title;}

void Warlock::introduce(void) const 
{ std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;}
