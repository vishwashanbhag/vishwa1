#include<iostream>
#include<math.h>

using namespace std;

int printmissingno()
{

  int test_cases;
  cin>>test_cases;

  while(test_cases>0)
  {
    int n;
    cin>>n;

    int array[1000];

    for(int iterator=0;iterator<n-1;iterator++)
    {
      cin>>array[iterator];
    }
    int total=0;

    total=(n)*(n+1)/2;

    for(int iterator=0;iterator<n-1;iterator++ )
    {
      total-=array[iterator];
    }

    cout<< total;
    test_cases=test_cases-1;


  }
  return 0;

}

int main()
{
  printmissingno();

  return 0;
}
