#include <vector>
#include "../vector.hpp"

int main(void)
{
	ft::vector<int> v;
	ft::vector<int> vector;
    vector.assign(1000, 1);
    v.push_back(*vector.begin());
    v.push_back(*++vector.begin());
}
