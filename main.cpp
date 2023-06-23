#include <iostream>
#include "src/day01.h"

using namespace std;

int main(int argc, char* argv[])
{
	cout << "argc: " << argc << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << " ";
		if (i == argc - 1)
			cout << "\n";
	}

	if (argc == 1)
	{

		cout << "no argv" << endl;
		return 0;
	}
	hs* test = new hs;
	if (strcmp(argv[1], "print") == 0)
	{ 
		cout << "print begin " << "\n";
		test->m_print();
	}
	else if (strcmp(argv[1], "runnian") == 0)
		test->m_runnain();
	else if (strcmp(argv[1], "union") == 0)
		test->m_union();
	return 0;
}