#include <iostream>

using namespace std;
int matBig[20240][20240]{};
int main()
{
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},	
		{7,8,9}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int mat2[3][5];
	cout << "행의 수: " << size(mat2) << ", 열의 수: " << size(mat2[0]) << endl;

	// 행렬의 곱셈

	int matrix2[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			matrix2[i][j] = matrix[i][j];
	}

	// 2차원 행렬 곱셈
	cout << "2차원 행렬 곱셈\n";
	int matrixResult[3][3] = {};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				matrixResult[i][j] += matrix[i][k] * matrix2[k][j];
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrixResult[i][j] << " ";
		}
		cout << endl;
	}

	int matrixCopy[3][3]{};

	// matrix copy
	cout << "matrix copy\n";
	memcpy(&matrixCopy, &matrix, sizeof(matrix));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrixCopy[i][j] << " ";
		}
		cout << endl;
	}
	// copy는 이렇게도 쓸 수 있음.
	copy(&matrix[0][0], &matrix[0][0] + 3 * 3,  &matrixCopy[0][0]);


	int sum = 0;
	for (int i = 0; i < 20240; i++) {
		for (int j = 0; j < 20240; j++) {
			sum += matBig[i][j];
			//sum+=matBig[j][i]; // 이렇게 하면 매우매우 오래걸림.
			// 캐시에서 데이터를 가져오면 좀 더 빠름.
			// 한 번 사용한 메모리는 다시 사용할 가능성 높음 (캐시)
			// 공간적으로 비슷한 곳에 있는 메모리는 다시 사용할 가능성 높음 (캐시)
			// i,j순으로 데이터를 가져오면 더 빠름
			// j,i 순으로 가져오면 데이터가 떨어져 있는 곳에 꺼를 가져오니까
			// 캐시가 아니라 메모리에서 바로 가져오므로 느림.
			// CPU가 메모리에서 근처에 거를 또 가져오니까 i,j가 더 빠름.
		}
	}
	cout << "Big Matrix Sum Test " << sum << endl;
}

