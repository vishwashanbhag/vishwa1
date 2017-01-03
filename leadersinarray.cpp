 /*http://www.practice.geeksforgeeks.org/problem-page.php?pid=623 */

#include<iostream>
#include<math.h>

using namespace std;

int leadersinarray()
{
  int test_cases;
  cin>>test_cases;

  while(test_cases>0)
  {
    int array_size;
    cin>>array_size;

    int array[100];

    for(int iterator=0;iterator<array_size;iterator++)
    {
      cin>>array[iterator];
    }

    for(int iterator=0;iterator<array_size;iterator++)
    {
      int iterator1;
      for( iterator1=iterator+1;iterator1<array_size;iterator1++)
      {
        if (array[iterator] <= array[iterator1])
        break;
      }
      if (iterator1==array_size-1)
      {
        cout << array[iterator1] << " ";
      }
    }
    test_cases=test_cases-1;
  }
  return 0;
}

int main()
{
  leadersinarray();
}
