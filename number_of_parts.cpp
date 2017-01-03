/*http://www.practice.geeksforgeeks.org/problem-page.php?pid=1124*/
#include<iostream>
#include<math.h>

using namespace std;

int numberofparts()
{
int test_cases;
cin>>test_cases;

  while(test_cases>0)
    {
      int number_of_elements;
      cin>>number_of_elements;

      int number;
      cin>>number;

      int array[500];

for(int itr=0;itr<number_of_elements;itr++)
   {
     cin>>array[itr];
   }

  int sum=0;
  for(int itr1=0;itr1<number_of_elements;itr1++)
     {


       int number_of_parts;
       if((array[itr1]%number)==0)
         {
           number_of_parts=array[itr1]/number;
         }

          else
          {
            number_of_parts=(array[itr1]/number)+1;
          }

       //int sum=0;
       sum+=number_of_parts;

       //cout<<sum<<'\n';
     }
    cout<<sum<<'\n';

    test_cases=test_cases-1;
    }
return 0;
}


int main()
{
numberofparts();
return 0;
}
