#include <bits/stdc++.h>
using namespace std;
 
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
    
}
 
//This function will print all the permutations
//Takes string, starting index and ending index as the arguments
void permute(char *a, int start, int end)
{
  int i;
  if (start == end)
  {  
      cout<<a<<endl;
  }
  else
  {
    for (i = start; i <= end; i++)
    {
      //swap the characters
      swap((a+start), (a+i));
      //recursively call
      permute(a, start+1, end);
      swap((a+start), (a+i)); //backtrack
    }
  }   
}
 
int main()
{
    string str = "1234"
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
