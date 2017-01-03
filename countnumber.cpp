/*http://www.practice.geeksforgeeks.org/problem-page.php?pid=577*/

#include<iostream>
#include<math.h>

using namespace std;

int countnumber()
{
int test_cases;
cin>>test_cases;

while(test_cases>0)
  {
      int array_size;
      cin>>array_size;

      int number;
      cin>>number;

      int array[300];
      for(int iterator=0;iterator<array_size;iterator++)
        {
            cin>>array[iterator];
        }
        int count=0;
        for(int itr=0;itr<array_size;itr++)
        {
          if(array[itr]==number)
          {
            count++;
          }
        }
        if(count>0)
        {
        cout<<count<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
        test_cases=test_cases-1;
  }
  return 0;
}

int main()
{
countnumber();
}
