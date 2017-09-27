//------------------------------------------------------------------
// File name:   VectorMain.cpp
// Assign ID:   PROG3a
// Due Date:    09/29/17 at 11pm
//
// Purpose:     Give student experience using arrays and vectors, and for
//              developing, testing and integrating vetted function components.
//
// Author:      twilson Tishauna Wilson
//
//------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

void Load(vector <int> & A)
{    
    int size;
    do
    {
       cout << "Enter N, the #values (must be >= 0): ";
       cin >> size;
    }while( size<0);
    A.resize(size);
        
    cout << "Enter next value: ";
    for(int k=0; k<A.size(); k++)
    {
        cin >> A[k];
    }   
}

int main()
{
   //----------------------------------------------------------------------
   //  Declare variables
   //----------------------------------------------------------------------
    int N;
    vector<int>v;

   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, twilson Tishauna Wilson, cmesidor Christopher Mesidor" << endl << endl; 


   //-| ----------------------------------------------------------------------
   //-| 1. Algorithm step 1.
   //-| ----------------------------------------------------------------------

  /*1*/  Load(v);

   //-| ----------------------------------------------------------------------
   //-| 2. Algorithm step 2.
   //-| ----------------------------------------------------------------------
   


   //-| ----------------------------------------------------------------------
   //-| 3. Last step:
   //-| ----------------------------------------------------------------------


   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship again.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, twilson Tishauna Wilson, cmesidor Christopher Mesidor" << endl << endl;  


   return 0;

}//main
