#pragma once
#include "Object.h"
#include "SimpleColumn.h"
#include "TableExceptions.h"
#include "Appearance.h"

#include <vector>
#include <iostream>

namespace ATable {
	class Table : public Object {
	private:
		vector<Column*>* columns; // vector of columns
		Appearance preset; // appearance of symbols for pseudographic
		string name; // name of table
	public:
		Table(Appearance preset, string name); // init
		~Table();
		void addColumn(Column* column); // add column to vector
		void addCell(int column, Cell* cell); // add cell to column by id
		virtual void print(ostream& stream); // virtual function to print in ostream
	private:
		Column* getColumn(int id); // returns column by id
		void drawLine(ostream & stream, char left_corner, char horizontal_line, char center_separator, char right_corner); // draw line of table
		void drawRow(ostream & stream, unsigned int row, char vertical_line); // draw one line inside table with given symbols
		void drawColumnsHeaders(ostream& stream, char vertical_line); // draws header of table
		unsigned int getMaxRowHeight(); // returns max height of table
	public:
		static string boundary(string value, int width); // cuts value by width
	};
}

