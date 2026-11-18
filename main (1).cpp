/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
     
     string blood;
     cout<<"Program to Check Blood Types and Donation Compatibility."<<endl;
     cout<<"Enter your blood type : ";
     cin>>blood;
     
     if(blood=="O+" || blood=="B+" || blood=="A+" ||blood=="AB+" ||blood=="O-" ||
     blood=="B-" || blood=="A-" ||blood=="AB-")
     {
         
         if(blood=="O+")
         cout<<"Can donate to O+, A+, B+, AB+.";
         
         else if(blood=="B-")
         cout<<"Can donate to B+, B-, AB+, AB-.";
         
         else if(blood=="B+")
         cout<<"Can donate to B+, AB+.";
         
         else if(blood=="A+")
         cout<<"Can donate to A+, AB+.";                
         
         else if(blood=="AB+")
         cout<<"Can donate to AB+ only.";
         
         else if(blood=="O-")
         cout<<"Universal donor, can donate to all types.";

         else if(blood=="A-")
         cout<<"Can donate to A+, A-, AB+, AB-.";
         
         else if(blood=="AB-")
         cout<<"Can donate to AB+, AB-.";
         
     }
     
     else
     cout<<"Invalid blood type. Please check the spelling and enter a recognized blood group..";
     
     
     
      
    return 0;
}
