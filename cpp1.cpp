#include <fstream>
#include <sstream>
#include <iomanip>
#include "CSVparser.hpp"

namespace csv {

  Parser::Parser(const std::string &data, const DataType &type, char sep)
    : _type(type), _sep(sep)
  {
      std::string line;
      if (type == eFILE)
      {
        _file = data;
        std::ifstream ifile(_file.c_str());
      }
	    33333333333333
		    4444
