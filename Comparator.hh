#ifndef		COMPARATOR_HH_
# define	COMPARATOR_HH_

#include <vector>

class Comparator
{
public:
  Comparator();
  ~Comparator();

  void	ShowMatches(std::vector<std::string> const&,
		    std::vector<std::string> const&) const;
};

#endif
