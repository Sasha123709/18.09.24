#include <iostream>

using namespace std;

void noZero(int** ar, int row, int col) {
    int n = 0;


    for (int j = 0; j < col; j++) {
        bool colzero = false;
        for (int i = 0; i < row; i++) {
            if (ar[i][j] == 0) {
                colzero = true;
                break;
            }
        }
        if (colzero == false) n++;
    }

    cout << n << endl;

    int** aray2 = new int* [n];
    int index = 0;

    
    for (int j = 0; j < col; j++) {
        bool colzero = false;
        for (int i = 0; i < row; i++) {
            if (ar[i][j] == 0) {
                colzero = true;
                break;
            }
        }
        if (colzero == false) {
            aray2[index] = new int[row];
            for (int i = 0; i < row; i++) {
                aray2[index][i] = ar[i][j];
            }
            index++;
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < n; j++) {
            cout << aray2[j][i] << ' ';
        }
        cout << endl;
    }

    
    for (int i = 0; i < n; i++) {
        delete[] aray2[i];
    }
    delete[] aray2;
}

int main() {
    srand(time(NULL));
    int row, col;
    
    cin >> row >> col;

    int** ar = new int* [row];

   
    
    for (int i = 0; i < row; i++) {
        ar[i] = new int[col];
        for (int j = 0; j < col; j++) {
            ar[i][j] = rand() % 10;
            cout << ar[i][j] << ' ';
        }
        cout << endl;
    }

    noZero(ar, row, col);

    
    for (int i = 0; i < row; i++) {
        delete[] ar[i];
    }
    delete[] ar;

    return 0;
}

 /*#include <iostream>

 using namespace std;

 int main(){
	 int shop;
	 cout << "Shop: ";
	 cin >> shop;
	 double** ar = new double* [shop];
	 for (int i = 0; i < shop; i++) {
		 ar[i] = new double[6];
	 }
	 cout << "Earn of shop" << endl;
	 for (int i = 0; i < shop; i++) {
		 for (int r = 0; r < shop; r++) {
			 ar[i][r] = ((double)rand() / RAND_MAX) * (10000 - 1000) + 1000;
			 cout << ar[i][r] << ' ';
		 }
		 cout << endl;
	 }
	 return 0;
 }*/