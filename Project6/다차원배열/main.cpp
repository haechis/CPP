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
	cout << "���� ��: " << size(mat2) << ", ���� ��: " << size(mat2[0]) << endl;

	// ����� ����

	int matrix2[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			matrix2[i][j] = matrix[i][j];
	}

	// 2���� ��� ����
	cout << "2���� ��� ����\n";
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
	// copy�� �̷��Ե� �� �� ����.
	copy(&matrix[0][0], &matrix[0][0] + 3 * 3,  &matrixCopy[0][0]);


	int sum = 0;
	for (int i = 0; i < 20240; i++) {
		for (int j = 0; j < 20240; j++) {
			sum += matBig[i][j];
			//sum+=matBig[j][i]; // �̷��� �ϸ� �ſ�ſ� �����ɸ�.
			// ĳ�ÿ��� �����͸� �������� �� �� ����.
			// �� �� ����� �޸𸮴� �ٽ� ����� ���ɼ� ���� (ĳ��)
			// ���������� ����� ���� �ִ� �޸𸮴� �ٽ� ����� ���ɼ� ���� (ĳ��)
			// i,j������ �����͸� �������� �� ����
			// j,i ������ �������� �����Ͱ� ������ �ִ� ���� ���� �������ϱ�
			// ĳ�ð� �ƴ϶� �޸𸮿��� �ٷ� �������Ƿ� ����.
			// CPU�� �޸𸮿��� ��ó�� �Ÿ� �� �������ϱ� i,j�� �� ����.
		}
	}
	cout << "Big Matrix Sum Test " << sum << endl;
}

