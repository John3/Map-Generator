#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <random>
#include <ctime>
#include <algorithm>

using namespace std;

template <class T>
T rand(T min, T max)
{
	static mt19937 generator((unsigned)time(nullptr));
	uniform_real<float> u(min, max);

	return u(generator);
}

void toLowerCase(std::string& source);

#endif