#include <iostream>

int main() {
int array[]={2,7,11,15};
int target = 9;
int size = (int)(sizeof(array)/sizeof(array[0]));
for (int i= 0; i< size; i++)
{
 for (int j=1; j < size; j++)
  {
    if((array[i]+array[j])==target)
	{
	  std::cout << i << "," << j <<'\n';
	}
  }
}
return 0;
}