/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:15 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 10:47:13 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept> // for exceptions
#include <algorithm> //for sort, min_element, max_element
#include <vector> //for .begin, .end, .size
#include <numeric> //for std::adjacent_difference

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

class Span
{
    unsigned int _N;
    std::vector<int> _intVector;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &object);
        Span &operator=(const Span &object);
        ~Span();
        void addNumber(int nb);
        void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class FullException : public std::exception
        {
	        public:
	        	virtual const char * what () const throw ();
        };
        class TooFewElemenstException : public std::exception
        {
	        public:
	        	virtual const char * what () const throw ();
        };

};