#include <iostream>
#include <fstream>
#include "Parser.hh"

Parser::Parser()
{
}

Parser::~Parser()
{
}

std::vector<std::string>&	Parser::GetLines(std::string const& filename) const
{
  std::ifstream			ifs(filename.c_str());
  std::vector<std::string>*	v = new std::vector<std::string>();
  std::string			line;

  if (ifs.is_open())
    while (std::getline(ifs, line))
      v->push_back(line);
  else
    std::cerr << "Error: opening file: " << filename << std::endl;
  return *v;
}
