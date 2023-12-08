/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:22:04 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 13:16:59 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	std::cout << "Default constructor called" << std::endl;
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(Container C):std::stack<T, Container>(C)
{
	std::cout << "Parametric constructor called" << std::endl;
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &object):std::stack<T, Container>(object.c)
{
	*this = object;
    std::cout << "Copy constructor called" << std::endl;
}

template<typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &object)
{
	if (this != &object)
    {
        this->c = object.c;
    }
    std::cout << "Copy Assignment operator called" << std::endl;
    return *this;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << "Destructor called" << std::endl;
}

template<typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
	return(this->c.begin());
}

template<typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
	return(this->c.end());
}

template<typename T, typename Container>
typename Container::const_iterator  MutantStack<T, Container>::begin() const
{
	return(this->c.begin());
}

template<typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::end() const
{
	return(this->c.end());
}