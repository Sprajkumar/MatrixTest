#include<iostream>
using namespace std;
void getCofactor(int **A,int **temp,int p,int q,int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = A[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinant(int **A,int n)
{
    int det= 0;
    if (n == 1)
        return A[0][0];
    int **temp;
    temp=new int* [n];
    for(int i=0;i<n;i++)
      temp[i]=new int[n];
    int sign = 1;
    for (int f = 0; f < n; f++)
    {
        getCofactor(A, temp, 0, f,n);
        det += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

int main(int argc, char const *argv[]) {
  /* code */
  int n;
  cin>>n;
  int **mat;
  mat=new int* [n];
  for(int i=0;i<n;i++)
    mat[i]=new int[n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>mat[i][j];
  cout<<determinant(mat,n);
  return 0;
}
