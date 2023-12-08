/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:34:48 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/07 00:25:11 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

class NotFoundException : public std::exception
{
	public:
		virtual const char * what () const throw () {
			return ("Integer not found in the container.");
		}
};

// do not use const as in typename Container::iterator easyfind(const Container& container, int find) so you can modify Container
// make sure the iterator matches your containers iterator type by using 'typename Container::iterator. Typename before iterator indicates it is a dependant type
// ie depends on the template parameter
template <typename Container>
typename Container::iterator easyfind(Container& container, int find)
{
    // std::find is an algorithm to search for the first occurrence of the specified value in the container.
    // The result is an iterator pointing to the found element or container.end() if the element is not found.
    typename Container::iterator result = std::find(container.begin(), container.end(), find);
    if (result == container.end())
            throw NotFoundException();
    return result;
}

