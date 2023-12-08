/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:27 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 10:01:12 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <list>
#include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

template<typename T, typename Container> 
class MutantStack: public std::stack<T>
{
    std::stack<int> _mstack;
    std::list<int> _mlist;
    public:
        MutantStack();
        MutantStack(const MutantStack &object);
        MutantStack &operator=(const MutantStack &object);
        ~MutantStack();
        typedef typename Container::iterator iterator;
        iterator begin();
        iterator end();
};
 