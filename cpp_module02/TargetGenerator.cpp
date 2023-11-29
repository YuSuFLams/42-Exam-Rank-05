/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:23:28 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:27:55 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget *>::iterator it = obj.begin();
    for (; it != obj.end(); ++it)
        delete it->second;
    this->obj.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
    if (target)
        obj.insert(std::map<std::string, ATarget *>::value_type(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &target) {
    std::map<std::string, ATarget *>::iterator it = obj.find(target);
    if (it != obj.end())
        delete it->second;
    obj.erase(target);
}

ATarget *TargetGenerator::createTarget(std::string const &target) {
    std::map<std::string, ATarget *>::iterator it = obj.find(target);
    if (it != obj.end())
        return obj[target];
    return NULL;
}