/*
 * MediaItem.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef MEDIAITEM_HPP_
#define MEDIAITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"

class MediaItem: public OrderItem {
public:
	MediaItem();
    string AuthorName;
    Date PublicationDate;
    string ISBNNumber;
    
	virtual ~MediaItem();
};

#endif /* MEDIAITEM_HPP_ */
