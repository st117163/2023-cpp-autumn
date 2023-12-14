#include<iostream>
#include<string>
#include<fstream>



int CountWords(std::string filename)
{
	std::ifstream fin(filename);
	int n_words = 0;
	std::string word = "";
	while (!fin.eof())
	{
		fin >> word;
		n_words++;
	}
	fin.close();
	return n_words;
}

int MaxWord(std::string filename)
{
	std::ifstream fin(filename);
	int max_len = 0;
	std::string word = "";
	while (!fin.eof())
	{
		fin >> word;
		max_len = (max_len > word.length()) ? max_len : word.length();
	}
	fin.close();
	return max_len;
}

void ReadWords(std::string filename, std::string* words)
{
	std::ifstream fin(filename);

	int ind = 0;
	while (!fin.eof())
	{
		fin >> words[ind];
		ind++;
	}
	fin.close();
}

void Filter(std::string* words, int n)
{
	std::string filt = ". ,;:!?\"\']{}()^*-";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < words[i].length(); j++)
		{
			if (filt.find(words[i][j]) != std::string::npos)
			{
				words[i].erase(j, 1);
			}

		}

	}
}
std::string thePop(std::string* words, int n)
{
	std::string pop = words[0];
	int mtimes = 0;
	for (int i = 0; i < n; i++)
	{
		int ttimes = 0;
		for (int j = i; j < n; j++)
		{
			if (words[i] == words[j])
			{
				ttimes++;
			}

		}
		if (ttimes > mtimes)
		{
			mtimes = ttimes;
			pop = words[i];
		}
	}
	return pop;
}

int main(int argc, char* argv[])
{
	std::string filename = "in.txt";
	int n_words = CountWords(filename);
	std::string* words = new std::string[n_words];

	ReadWords(filename, words);

	Filter(words, n_words);

	std::ofstream fout("out.txt");
	fout << "The most common word in \"in.txt\" is ";
	fout << "\'" << thePop(words, n_words) << "\'." << std::endl;


	return EXIT_SUCCESS;
}