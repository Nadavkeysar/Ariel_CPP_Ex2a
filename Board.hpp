#pragma once
#include <string>
#include <iostream>
#include "Direction.hpp"
using namespace std;
namespace ariel
{
	class Board
	{
	
	public:
		void post(unsigned int row, unsigned int column, Direction direction,const string &message);
		string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);
		void show();
	};
}