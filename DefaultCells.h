#pragma once
#include "Cell.h"

namespace ATable {
	class StringCell : public Cell { // describes string type cell
	public:
		string value;
	public:
		StringCell(string value) {
			this->value = value;
		}
		string output() {
			return this->value;
		}
	};

	class IntegerCell : public Cell { // can hold integer
	public:
		int value;
	public:
		IntegerCell(int value) {
			this->value = value;
		}
		string output() {
			return to_string(this->value); // converts to string
		}
	};

	class LongCell : public Cell { // hold long type
	public:
		int value;
	public:
		LongCell(int value) { // init c-tor
			this->value = value;
		}
		string output() {
			return to_string(this->value);
		}
	};

	class FloatCell : public Cell { // hold float cell
	public:
		float value;
		int percision;
	public:
		FloatCell(float value, int percision) { // init constructor
			this->value = value;
			this->percision = percision;
		}
		FloatCell(float value) : FloatCell(value, 3) {} // another
		string output() {
			string integer = to_string((int)value);
			string fractional = to_string((int)(abs(value - (int)value) * pow(10, percision)));
			string result;
			result += integer + "." + fractional;
			return result;
		}
	};

	class DoubleCell : public Cell { // hold double value
	public:
		double value;
		int percision;
	public:
		DoubleCell(double value, int percision) {
			this->value = value;
			this->percision = percision;
		}
		DoubleCell(double value) : DoubleCell(value, 3) {}
		string output() {
			string integer = to_string((int)value);
			string fractional = to_string((int)(abs(value - (int)value) * pow(10, percision)));
			string result;
			result += integer + "." + fractional;
			return result;
		}
	};

}
