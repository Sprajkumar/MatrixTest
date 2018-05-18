#include <iostream>
using namespace std;
int main(int argc, char **argv) 
{
  int m,n;
  cout<<"Enter the Order of matrix ";
  cin>>m>>n;
  int mat[m][n];
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      cin>>mat[i][j];
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      cout<<mat[i][j];
  return 0;
}
