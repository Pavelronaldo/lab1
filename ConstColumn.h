#pragma once
#include "Column.h"
#include "DefaultCells.h"

namespace ATable {
	class ConstColumn : public Column { // describes non-changeable cell
	protected:
		Cell* cell; // pointer to cell object
	public:
		ConstColumn(string value);
		~ConstColumn();
		Cell* getCell(int id); // overloaded getter of cell (returns object of Cell)
	};
}

