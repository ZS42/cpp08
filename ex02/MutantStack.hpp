/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:27 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 15:26:50 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <deque>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
		MutantStack();
        MutantStack(Container C);
        MutantStack(const MutantStack &object);
        MutantStack &operator=(const MutantStack &object);
        ~MutantStack();
        typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator  iter;
        iterator begin();
        iterator end();
		iter begin() const;
        iter end() const;
};

#include "MutantStack.tpp"

#endif