/*
 * FoodItem.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef FOODITEM_HPP_
#define FOODITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"

class FoodItem: public OrderItem {
public:
	FoodItem();
    Date ExpirationDate;
    int calories;
    int fat;
    
	virtual ~FoodItem();
};

#endif /* FOODITEM_HPP_ */
