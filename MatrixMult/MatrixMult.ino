const int colA = 3, rowA = 3;
int A[rowA][colA] = {1, 2, 3,
                     4, 5, 6,
                     7, 8, 9};
const int rowB = 3, colB = 3; 
int B[rowB][colB] = {9, 8, 7,
                     6, 5, 4,
                     3, 2, 1};


void setup() {
  Serial.begin(9600);
}

void loop() {
  printMatrix(A);
  printMatrix(B);

}
void printMatrix(int x[][3])
{
  for(int i = 0; i < colA; )
  {
    for(int j = 0; j < rowA; j++)
    {
      Serial.print(x[i][j]);
      Serial.print("\t");
    }
    Serial.print("\n");
  }
}
