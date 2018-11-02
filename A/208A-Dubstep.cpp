#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dubstep;

	cin >> dubstep;

	int offset = dubstep.find("WUB");

	while(offset != string::npos)
	{
		if (offset > 0 && offset < dubstep.length() - 3 && dubstep[offset - 1] != ' ')
		{
			dubstep.insert(offset, " ");
			offset++;
		}

		dubstep.erase(offset, 3);
		offset = dubstep.find("WUB");
	}
	
	cout << dubstep;

	return 0;
}