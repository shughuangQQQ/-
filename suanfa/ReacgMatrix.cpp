

#include <iostream>
using namespace std;

int GetPosNum(int x, int y) {
	int count_wei = 0;
	for (; x > 0; x /= 10)
		count_wei += x % 10;
	for (; y > 0; y /= 10)
		count_wei += y % 10;
	return count_wei;
}
bool AviableReach(int curposx, int curposy, int rows, int cols, int &Count, bool *AlreadReach, int CountBase);
int AviableReachCount(int rows, int cols, int CountBase) {
	if (rows <= 0 || cols <= 0 || CountBase <= 0)
		return 0;
	bool *AlreadReach = new bool[rows * cols];
  memset(AlreadReach, false,rows * cols);
	int CountReach = 0;
	AviableReach(0, 0, rows, cols, CountReach, AlreadReach, CountBase);
	return CountReach;
}
bool AviableReach(int curposx, int curposy, int rows, int cols, int &Count, bool *AlreadReach, int CountBase) {
	if (rows <= 0 || cols <= 0 || curposx > rows - 1 || curposy > cols - 1)
		return false;
	if (AlreadReach[curposx * curposy + curposy] == true || GetPosNum(curposx, curposy, CountBase) == false)
		return false;
	if (AviableReach(curposx - 1, curposy, rows, cols, Count, AlreadReach)) {
		AlreadReach[(curposx - 1) * curposy + curposy] = true;
		Count++;
	}
	if (AviableReach(curposx + 1, curposy, rows, cols, Count, AlreadReach)) {
		AlreadReach[(curposx + 1) * curposy + curposy] = true;
		Count++;
	}
	if (AviableReach(curposx, curposy + 1, rows, cols, Count, AlreadReach)) {
		AlreadReach[curposx  * (curposy + 1) + curposy + 1] = true;
		Count++;
	}
	if (AviableReach(curposx, curposy - 1, rows, cols, Count, AlreadReach)) {
		AlreadReach[curposx  * (curposy - 1) + curposy - 1] = true;
		Count++;
	}
	return true;
}





int main()
{



	return 0;
}

