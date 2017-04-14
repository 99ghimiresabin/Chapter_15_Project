/*
 * Order.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef ORDER_HPP_
#define ORDER_HPP_
#include "Date.hpp"
#include "iostream"
using namespace std;


class Order {
public:
	Order();
    string OrderNumber;
    Date orderDate;
    //// ItemsInOder(vector of OrderItem Pionters)
    ///  A pionter to a costumer indicating the costumer who placed this order
    
    
    

	virtual ~Order();
};

#endif /* ORDER_HPP_ */
