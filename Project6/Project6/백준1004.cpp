#include <iostream>

int main() {
	int T = 0;
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	int n = 0;
	int cx = 0, cy = 0, r = 0, r_squared = 0;

	int dist1_squared = 0, dist2_squared = 0;
	
	int cnt;
	std::cin >> T;
	

	for (int i = 0; i < T; i++) {
		std::cin >> x1>> y1 >> x2 >> y2;
		std::cin >> n;
		cnt = 0;

		for (int j = 0; j < n; j++) {
			std::cin >> cx >> cy >> r;
			r_squared = r * r;
			dist1_squared = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
			dist2_squared = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);

			if ((dist1_squared > r_squared) && (dist2_squared < r_squared)) cnt++;
			else if ((dist1_squared < r_squared) && (dist2_squared > r_squared)) cnt++;
			else continue;



		}
		std::cout << cnt << std::endl;
	}

	

	return 0;
}