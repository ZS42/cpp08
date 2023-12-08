/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:11 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 14:43:18 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
    std::cout << "Parametric constructor called" << std::endl;
}

Span::Span(const Span &object)
{
    *this = object;
    std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &object)
{
    if (this != &object)
    {
        _N = object._N;
        _intVector = object._intVector;
    }
    std::cout << "Copy Assignment operator called" << std::endl;
    return *this;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int nb)
{
    try
    {
        if (_intVector.size() == _N)
            throw FullException();
        _intVector.push_back(nb);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan()
{
    if (_intVector.size() < 2)
        throw TooFewElemenstException();
    sort(_intVector.begin(), _intVector.end());
    // to store the vector of differences with same number of elements
    std::vector<int> adj_diff(_intVector.size());
    // std::adjacent_difference ssigns to every element in the range starting at result the
    // difference between its corresponding element in the range [first,last)
    // and the one preceding it (except for *result, which is assigned *first).
    std::adjacent_difference(_intVector.begin(), _intVector.end( ),adj_diff.begin());
	// std::vector<int>::iterator itr;
	// itr = adj_diff.begin();
	// while (itr != adj_diff.end())
	// {
	// 	std::cout << *itr << "," ;
	// 	itr++;
	// }
	// std::cout << "\n";
	// added ++ to skip first number which is not a difference
    return (*std::min_element(++adj_diff.begin(), adj_diff.end()));
}

int Span::longestSpan()
{
    int min;
    int max;

    if (_intVector.size() < 2)
        throw TooFewElemenstException();
    // std::min_element returns an iterator pointing to the element
    // with the smallest value in the range [first,last). Dereference to get value
    min = *std::min_element(_intVector.begin(), _intVector.end( ));
    // std::max_element returns an iterator pointing to the element with the
    //  largest value in the range [first,last). Dereference to get value
    max = *std::max_element(_intVector.begin(), _intVector.end());
    return (max - min);
}

// use assign to fill whole vector or insert to add to an existing vector
void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    try
    {
        if (_intVector.size() == _N)
            throw FullException();
        else
            _intVector.assign(start, end);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char *Span::FullException ::what() const throw()
{
	return ("Container is full. Can't add more");
}

const char *Span::TooFewElemenstException ::what() const throw()
{
	return ("Too few elements. Finding span not possible");
}