#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? n2;
   ?? n1;
   ?? ch;
   ?? sum;

   raptor_prompt_variable_zzyz ="Enter First number";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n1;
   raptor_prompt_variable_zzyz ="Enter Second number";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n2;
   raptor_prompt_variable_zzyz ="Enter a symbol ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> ch;
   if (ch=="+")
   {
   }
   else
   {
      cout << "not possible" << endl;   }
   sum =n1+n2;
   cout << "Average  of two numbers is ;"+(sum/2) << endl;
   return 0;
}
