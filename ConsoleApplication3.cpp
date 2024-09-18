 #include <iostream>

 using namespace std;

 void noZero(int** ar, int row, int col) {
     int i, j, n = 0;
     for (int i = 0; i < row; i++) {
         bool rowzero = false;
         for (int j = 0; j < col; j++) {
             if (ar[i][j] == 0) {
                 rowzero = true;
                 break;
             }
         }
         if (rowzero == false) n++;
     }
     cout << n << endl;
     int index = 0;
     int** aray2 = new int* [n];
     for (int i = 0; i < row; i++) {
         bool rowzero = false;
         for (int j = 0; j < col; j++) {
             if (ar[i][j] == 0) {
                 rowzero = true;
                 break;
             }
         }
         if (rowzero == false){
         aray2[index] = new int[col];
         for (int j = 0; j < col; j++) {
             aray2[index][j] = ar[i][j];
             cout << aray2[index][j] << ' ';
         }
         cout << endl;
         index++;
         }
     }

 }

 int main()
 {
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


