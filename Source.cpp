//#include<iostream>
//#include<conio.h>
//using namespace std;
//char arr[6][6];
//int dx[5] = { 0, 0, 0, 1, -1 };
//int dy[5] = { 0, 1, -1, 0, 0 };
//int dem, mins;
//
//void update(int row, int col) {
//
//	for (int i = 0; i < 5; i++)
//	{
//		int ncol = dy[i] + col;
//		int nrow = dx[i] + row;
//		if (arr[nrow][ncol] == 'w') {
//			arr[nrow][ncol] = 'b';
//		}
//		else if (arr[nrow][ncol] == 'b') {
//			arr[nrow][ncol] = 'w';
//		}
//	}
//}
//
//bool check() {
//	char k = arr[1][1];
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= 4; j++) {
//			if (arr[i][j] != k) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void backtrack(int row, int col) {
//	if (row == 5) {
//		return;
//	}
//	else {
//		if (check()) {
//			if (mins > dem) {
//				mins = dem;
//			}
//		}
//		else {
//			update(row, col);
//			dem++;
//
//			int nrow, ncol;
//			if (col == 5) {
//				nrow = row + 1;
//				ncol = 1;
//			}
//			else {
//				nrow = row;
//				ncol = col + 1;
//			}
//			backtrack(nrow, ncol);
//			update(row, col);
//			dem--;
//			backtrack(nrow, ncol);
//		}
//	}
//}
//int main() {
//	int T;
//	freopen("input.txt", "r", stdin);
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++) {
//		mins = 9999999;
//		dem = 0;
//		for (int i = 1; i <= 4; i++)
//		{
//			for (int j = 1; j <= 4; j++) {
//				cin >> arr[i][j];
//			}
//		}
//		backtrack(1, 1);
//		if (mins == 9999999)
//			cout << "#" << tc << " imposible" << endl;
//		else
//			cout << "#" << tc << " " << mins << endl;
//	}
//	getch();
//}
