//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int n;
//int arr[30][30];
//int colors[30];
//int sum = 0;
//
//bool check(int point, int color) {
//	for (int y = 0; y < n; y++) {
//		if (colors[y] == color && arr[point][y] == 1) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void BT(int point) {
//	if (point == n) {
//		sum++;
//		return;
//	}
//	for (int color = 1; color <= 4; color++) {
//		colors[point] = color;
//		if (check(point, color) == true) {
//			BT(point + 1);
//			colors[point] = 0;
//		}
//		else {
//			colors[point] = 0;
//		}
//		/*if (check(point, color)) {
//			colors[point] = color;
//			BT(point+1);
//			colors[point] = 0;
//		}*/
//	}
//}
//
//void main_painting() {
//	int T;
//	freopen("painting.txt", "r", stdin);
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++) {
//		cin >> n;
//		// nhap ma tran ke
//		for (int x = 0; x < n; x++) {
//			for (int y = 0; y < n; y++) {
//				cin >> arr[x][y];
//			}
//		}
//		sum = 0;
//		BT(0);
//		cout << "#" << tc << " " << sum << endl;
//	}
//	getch();
//}