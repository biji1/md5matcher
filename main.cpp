#include <iostream>
#include <ctime>
#include "Parser.hh"
#include "Comparator.hh"

int	main(int ac, char** av)
{
  // checking args
  if (ac != 3)
    {
      std::cerr << "Usage: " << av[0] << " <file1> <file2>" << std::endl;
      std::cerr << "<file1>: list of hashes" << std::endl;
      std::cerr << "<file2>: list of words" << std::endl;
      return -1;
    }

  // getting datas
  Parser			parser;
  std::string			file1 = av[1], file2 = av[2];
  std::vector<std::string>&	hashes = parser.GetLines(file1);
  std::vector<std::string>&	words = parser.GetLines(file2);

  // get matches with time
  Comparator	comparator;
  clock_t	begin, end;

  begin = clock();
  comparator.ShowMatches(hashes, words);
  end = clock();

  double elapsed = double(end - begin) / CLOCKS_PER_SEC;
  std::cout.precision(5);
  std::cout << "time elapsed: " << elapsed << " second(s)" << std::endl;

  // cleaning
  hashes.clear();
  delete &hashes;
  words.clear();
  delete &words;

  return 0;
}
