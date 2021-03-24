#include "Board.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace ariel {
	void Board::post(unsigned int row, unsigned int column, Direction direction,const string &message) {

	}
	string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int length) {
		string str;
		for (unsigned int i = 0; i < length; i++)
		{
			str += "_";
		}
		return str;
	}
	void Board::show() {

	}
}