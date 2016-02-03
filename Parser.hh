#ifndef		PARSER_HH_
# define	PARSER_HH_

#include <vector>

class Parser
{
public:
  Parser();
  ~Parser();

  std::vector<std::string>& GetLines(std::string const&) const;
};

#endif
