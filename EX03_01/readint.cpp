#include "readint.h"
#include <stdexcept>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	if (low == NULL || high == NULL)
	{
		throw invalid_argument("e");
	}
	return low;
}

