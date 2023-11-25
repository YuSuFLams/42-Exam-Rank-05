/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:48:30 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 17:44:50 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) :name(name), title(title) 
{ std::cout << this->name << ": This looks like another boring day." << std::endl;}

Warlock::~Warlock(){ std::cout << this->name << ": My job here is done!" << std::endl;}

const std::string &Warlock::getName( void ) const {return this->name;};

const std::string &Warlock::getTitle( void ) const { return this->title;}

void Warlock::setTitle(const std::string title) {this->title = title;}

void Warlock::introduce() const 
{std::cout << this->getName() << ": I am " << this->getName() << " , " << this->getTitle() << "!" << std::endl;}