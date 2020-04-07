#pragma once
#include "Object.h"

#include <string>
#include <iostream>

namespace ATable {
	class Cell : public Object { // derived from Object
	private:
		unsigned int width; // width of cell
	public:
		// c-tors
		Cell();
		~Cell();
		virtual string output() = 0; // pure virtual func output in ostream
		void print(ostream& stream); // print cell in ostream
		void setWidth(unsigned int width); // setter
		unsigned int getWidth(); // getter
	private:
		string boundary(string value); // cuts value by sell width
	};
}

