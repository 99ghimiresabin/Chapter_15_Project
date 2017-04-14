/*
 * Customer.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include <iostream>
#include <string>
#include "Date.hpp"

using namespace std;

class Customer {
public:
	Customer();
    string CostumerNumber;
    string CostumerName;
    string Email;
    Date   DateJioned;
    
    
    
    
	virtual ~Customer();
};

#endif /* CUSTOMER_HPP_ */
