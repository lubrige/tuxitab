#include "../pch.h"
using namespace std;

TEST(TestManacher, Test) {
	string input = "babcbabcbaccba";
	vector< int > expected = { 0, 0, 1, 0, 3, 0, 1, 0, 7, 0, 1, 0, 9, 0, 1, 0, 5, 0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 0, 0 };
	vector< int > actual = snippet::manacher(input);
	EXPECT_EQ(expected, actual);
}