
#include <iostream>
#include <vector>
 


int main()
{
  std::vector<int> v;
  int n;
  std::cin>>n;
  int a;
  for(int i = 0; i < n; ++i)
  {
    std::cin>> a;
    v.push_back(a);
  }
  for(int i = 0; i < n; ++i)
  {
      if(v[i] < v[i+1]){
          std::cout<<v[i]<<" ";
      }
  }

    return 0;
}