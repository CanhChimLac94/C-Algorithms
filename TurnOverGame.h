#include<conio.h>
#include<iostream>

using namespace std;

char a;
int B[4][4], total, min, countn;
int dx[4] = { 0, 0, -1, 1 }, dy[4] = { 1, -1, 0, 0 };

bool check() {
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			if (B[x][y] != B[0][0]) {
				return false;
			}
		}
	}
	return true;
}

void lat(int x, int y) {
	B[x][y] = 3 - B[x][y];
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < 4 && ny >= 0 && ny < 4) {
			B[nx][ny] = 3 - B[nx][ny];
		}
	}
}

void BT(int x, int y) {
	if (x >= 4 || y >= 4) {
		return;
	}
	if (check() && countn < min) {
		min = countn;
	}
	int nx = x;
	int ny = y + 1;
	if (ny >= 4) {
		ny = 0;
		nx++;
	}
	if (nx >= 0 && ny >= 0 && nx < 4 && ny < 4) {
		BT(nx, ny);
		lat(x, y);
		countn++;
		BT(nx, ny);
		lat(x, y);
		countn--;
	}
}

void main_TurnOverGame() {
	freopen("inputTurnOverGame.txt", "r", stdin);
	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		for (int x = 0; x < 4; x++) {
			for (int y = 0; y < 4; y++) {
				cin >> a;
				if (a == 'w') {
					B[x][y] = 1;
				}
				else if (a == 'b') {
					B[x][y] = 2;
				}
			}
		}
		total = countn = 0;
		min = 10000;
		BT(0, 0);
		if (min == 10000) {
			cout << "#" << tc << " impossible" << endl;
		}
		else
			cout << "#" << tc << " " << min << endl;
	}
	getch();
	return;
}
