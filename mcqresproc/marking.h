#include <vector>
#include <string>

using namespace std;

int marking(vector<string> answer, vector<string> ms) {
	int mark = 0;
	for (int i = 0; i < 40; ++i) {
		if (answer[i] == ms[i]) {
			mark++;
		}
	}
	return mark;
}