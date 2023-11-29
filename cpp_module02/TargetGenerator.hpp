/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:22:30 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 05:23:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>

#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> obj;

        TargetGenerator(const TargetGenerator &src);
        TargetGenerator &operator=(const TargetGenerator &rhs);

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target);
        ATarget *createTarget(std::string const &target);
};