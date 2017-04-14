/*
 * ElectronicItem.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef ELECTRONICITEM_HPP_
#define ELECTRONICITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"

class ElectronicItem: public OrderItem {
public:
	ElectronicItem();
    //// enum types
    int WarrentyMonths;
    Date date;
	virtual ~ElectronicItem();
};

#endif /* ELECTRONICITEM_HPP_ */
