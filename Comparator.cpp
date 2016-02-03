#include <iostream>
#include "Comparator.hh"
#include "md5.h" // source: http://www.zedwood.com/article/cpp-md5-function

Comparator::Comparator()
{
}

Comparator::~Comparator()
{
}

void	Comparator::ShowMatches(std::vector<std::string> const& hashes,
				std::vector<std::string> const& words) const
{
  for (std::vector<std::string>::const_iterator it = hashes.begin();
       it != hashes.end(); ++it)
    {
      bool found = false;
      for (std::vector<std::string>::const_iterator it2 = words.begin();
	   it2 != words.end(); ++it2)
	{
	  if ((*it).compare(md5(*it2)) == 0)
	    {
	      found = true;
	      std::cout << "\"" << *it << "\" -> \"" << *it2 << "\"" << std::endl;
	      break;
	    }
	}
      if (!found)
	std::cout << "\"" << *it << "\" -> no match found" << std::endl;
    }
}
