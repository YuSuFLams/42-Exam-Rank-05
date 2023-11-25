/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:07:33 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:22:56 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) :name(name), title(title) 
{ std::cout << this->name << ": This looks like another boring day." << std::endl;}

Warlock::~Warlock()
{ 
    std::cout << this->name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell*>::iterator it = m_obj.begin(); it != m_obj.end(); ++it) {
		delete it->second;
	}
	m_obj.clear();
}

const std::string &Warlock::getName( void ) const {return this->name;};

const std::string &Warlock::getTitle( void ) const { return this->title;}

void Warlock::setTitle(const std::string title) {this->title = title;}

void Warlock::introduce() const 
{std::cout << this->getName() << ": I am " << this->getName() << " , " << this->getTitle() << "!" << std::endl;}

void Warlock::learnSpell(ASpell *obj)
{
    if (obj)
        if(m_obj.find(obj->getName()) == m_obj.end())
            m_obj[obj->getName()] = obj->clone();
}

void Warlock::forgetSpell(std::string name)
{
    if (m_obj.find(name) != m_obj.end())
		m_obj.erase(m_obj.find(name));
}

void Warlock::launchSpell(std::string name, ATarget const &obj)
{
    if (m_obj.find(name) != m_obj.end())
		m_obj[name]->launch(obj);
}
