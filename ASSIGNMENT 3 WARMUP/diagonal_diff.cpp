#include <iostream> 
#include<vector>

using namespace std;


int diagonalDifference(vector <vector<int> > v)
{

    int n = v.size();
    int sum = 0;
    int summ= 0 ;
    int ans = 0 ;
    for(int i = 0 ; i<n ;i++)
    {
        for(int j = 0 ;j<n ;j++)
        {
            if(i-j == 0 )
            {
                sum+=v[i][j];
            }
             if(i+j == n- 1 )
            {
                summ+=v[i][j];
            }
        }
        
    }
    
    
   if(sum>summ)
   {
    ans = sum -summ;

   }
   else if(summ >sum)
   {
    ans = summ -sum;
   }
   return ans ;
}





int main ()
{
    
 int row;

cin>>row;
vector<vector<int> > matrix;

for(int i=0;i<row;i++)
{
vector<int>temp;
for(int j=0;j<row;j++)
{
int val;
cin>>val;
temp.push_back(val);
}
matrix.push_back(temp);
}

    int ans = diagonalDifference(matrix);
   
    
    cout << ans << endl;
    
}
