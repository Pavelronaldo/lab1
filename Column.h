#pragma once
#include "Object.h"
#include "Cell.h"
#include "TableExceptions.h"

namespace ATable { // namespace ATable
	class Column : public Object {
	public:
		unsigned int width; // width of table column
	public:
		Column(unsigned int width); // c-tor
		~Column();
		unsigned int getWidth(); // get width
		void setWidth(unsigned int width); // setter of width
		virtual Cell* getCell(int id) = 0; // pure virtual function to get cell(actually returns cell type object)
	};
}

