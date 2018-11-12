const int colA = 3, colB = 3, rowA = 3, rowB = 3;
int A[rowA][colA] = [1, 2, 3,
                     4, 5, 6,
                     7, 8, 9];
                     
int B[rowB][colB] = [9, 8, 7,
                     6, 5, 4,
                     3, 2, 1];


void setup() {
  Serial.begin(9600);
}

void loop() {
  printMatrix(A);
  printMatrix(B);

}
void printMatrix(int x[][])
{
  int rows = sizeof(x) / sizeof(x[0]);
  int cols = sizeof(x[0]) / sizeof(int);
  for(int i = 0; i < cols; )
  {
    for(j = 0; j < rows; j++)
    {
      Serial.print(x[j]);
      Serial.print("\t");
    }
    Serial.print("\n");
  }
}
