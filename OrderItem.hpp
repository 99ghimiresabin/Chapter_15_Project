/*
 * OrderItem.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef ORDERITEM_HPP_
#define ORDERITEM_HPP_
#include <iostream>
using namespace std;

class OrderItem {
public:
	OrderItem();
    string orderNumber;
    string ItemNumber;
    string ItemDescription;
    int Quiantity;
    double CostumerCost;
    double VendorCost;
    bool TaxExempt;
    
	virtual ~OrderItem();
};

#endif /* ORDERITEM_HPP_ */
