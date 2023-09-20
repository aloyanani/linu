
#include <stdio.h>
 unsigned int F (unsigned int eax, int temp)
{
    
    if(eax  == 0)
    {
        eax = 1;
      for(int i = 0; i < temp; i++)
      {
          eax = eax + eax * 2;
      }
       printf("%u", eax);
       return 0;
    }
   
     if (eax != 0)
    {
        --eax;
        F(eax, temp);
    }
    return 0;
}

int main(void)
{
    unsigned int eax;
    scanf("%u", &eax);
    F(eax, eax);
  
    return 0;
}
