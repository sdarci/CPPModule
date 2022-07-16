#include <iostream>
#include <fstream>
#include <string>
void ft_replace(std::string &buff, std::string s1, std::string s2)
{
	size_t lenS1 = s1.length();
	size_t lenS2 =  s2.length();
	size_t pos = buff.find(s1, 0);

	while (pos != std::string::npos)
	{
		buff.erase(pos, lenS1);
		buff.insert(pos, s2);
		pos = buff.find(s1, pos + lenS2);
	}
}

int main(int c, char **argv)
{
	std::string buff;
	if (c != 4) 
	{
		std::cout << "Non-valid argument number, this program only accepts: FILENAME, s1 and s2" << std::endl;
		return 1;
	}
	for (int i = 1; i < 4; i++) 
	{
		if (!argv[i] || !argv[i][0]) 
		{
			std::cout << "Empty strings ???" << std::endl;
			return 1;
		}
	}
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error opening file: " << argv[1] << std::endl;
		return (1);
	}
	std::string			outfile(argv[1]);
	outfile += ".reaplace";
	std::ofstream new_file(outfile.c_str()); // не принимал стринг:?
	if (!new_file)
	{
		std::cout << "Error opening file: " << outfile << std::endl;
		return (1);
	}
	while (!file.eof())
	{
		getline(file, buff);
		ft_replace(buff, argv[2], argv[3]);
		new_file << buff << std::endl; 
	}
	return (0);
}