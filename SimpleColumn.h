#pragma once
#include "Cell.h"
#include "Column.h"

#include <vector>



namespace ATable {
	class SimpleColumn : public Column {
	public:
		string name; // name field
	protected:
		vector<Cell*>* cells; // vector of cells with different types
	public:
		SimpleColumn(string name, unsigned int width); // init c-tor
		~SimpleColumn();
		string getName(); // getter, returns column name
		void setName(string name); // set column name
		void addCell(Cell* cell); // adds new cell to column
		Cell* getCell(int id); // returns cell
		unsigned int getHeight(); // returns height of columns (count of elements)
	};
}

