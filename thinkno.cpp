#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace::std;

void mean( const int [], int );
void median( int [], int );
void mode( int [], int [], int );
void bubbleSort( int[], int );
void printArray( const int[], int );

int Mode1;

int main()
{
   const int play = 11;  // size of array play

   int frequency[ 6 ] = { 0 };  // initialize array frequency 1-5

   // initialize array player
   int player[ play ] , reward[ play ] ;
	cout << "Input number { 1,2,3,4,5 }" << endl;
	cout << endl;
	
	for ( int i = 1 ; i < play ; i++ )
	{
		cout << "Player [ " << i << " ] : " ;
		cin >> player[i];
		cout << endl;
		reward[i] = player[i];
		
		while ( player[i] < 0 || player[i] > 5 )
		{
			cout << "!! ERROR !! , Player [ " << i << " ] , " << endl;
			cout << "Input number { 1,2,3,4,5 } again : " ;
			cin >> player[i];
			cout << endl;
			reward[i] = player[i];
		}
	}
	
	
    //process player
   mean( player, play );
   median( player, play );
   mode( frequency, player, play );
   
   return 0;  

} // end main

// calculate average of all player values
void mean( const int answer[], int arraySize )
{
   int total = 0;

   cout << "MEAN" << endl;
   cout << endl;

   // total player values
   for ( int i = 1 ; i < arraySize ; i++ )
   {
      total += answer[ i ];
   }
   cout << fixed << setprecision( 2 );

   cout << "The mean is the average value of the numbers that players fill in\n"
        << "All the data items divided by the number of data items (" << arraySize-1 << ")" << endl;
   cout << endl;
   cout << "Total = " << total << endl;
   cout << endl;
   cout << "The mean value for this run is : " << total << " / " << arraySize-1 << " = "
	<< static_cast< double >( total ) / arraySize-1 << endl;
   cout << endl;

} // end function mean

// sort array and determine median element's value
void median( int answer[], int size )
{
   cout << "MEDIAN" << endl;
   cout << endl;
   cout << "The unsorted array of the numbers that players fill in is" << endl;

   printArray( answer, size );  // output unsorted array

   bubbleSort( answer, size );  // sort array

   cout << "\n\nDESCENDING ORDER" << endl;
   cout << "The sorted array of the numbers that players fill in is" << endl;
   
   printArray( answer, size );  // output sorted array 
    
   // display median element
   cout << "\n\nThe median is element " << size / 2
        << " of\nthe sorted " << size-1 
        << " element array.\nFor this run the median is "
        << answer[ size / 2 ] << "\n\n";

} // end function median

// function that sorts an array with bubble sort algorithm
void bubbleSort( int a[], int size )
{
   int hold;  // temporary location used to swap elements

   // loop to control number of passes
   for ( int pass = 1 ; pass < size ; pass++ )
   {
		// loop to control number of comparisons per pass
      for ( int j = 1 ; j < size - 1 ; j++ )
      {

         // swap 
         if ( a[ j ] < a[ j + 1 ] ) 
		 {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;

         } // end if
	  }
   }
} // end function bubbleSort

// output array contents
void printArray( const int a[], int size )
{
   for ( int i = 1 ; i < size ; i++ ) 
   {

      if ( i % 5 == 1 )
	  {  // begin new line every 5 values
         cout << endl;
      }
      
      cout << setw( 3 ) << a[ i ];

   } // end for

} // end function printArray

// determine most frequent response
void mode( int freq[], int answer[], int size )
{
   int largest = 0;    // represents largest frequency
   int modeValue = 0;  // represents most frequent play

   cout << "MODE" << endl;
   cout << endl;

   // initialize frequencies to 0
   for ( int i = 1 ; i <= 5 ; i++ )
      freq[ i ] = 0;

   // summarize frequencies
   for ( int j = 1 ; j < size ; j++ )
      ++freq[ answer[ j ] ];

   // output headers for result columns
   cout << "Response" << setw( 11 ) << "Frequency"
        << setw( 19 ) << "Histogram\n\n";

   // output results
   for ( int rating = 1 ; rating <= 5 ; rating++ ) {
      cout << setw( 8 ) << rating << setw( 11 )
           << freq[ rating ] << "          ";

      // keep track of mode value and largest fequency value
      if ( freq[ rating ] > largest ) {
         largest = freq[ rating ];
         modeValue = rating;

      } // end if

      // output histogram bar representing frequency value
      for ( int k = 1; k <= freq[ rating ]; k++ )
         cout << '*';

      cout << '\n';  // begin new line of output

   } // end outer for

   // display the mode value
   cout << "The mode is the most frequent value.\n"
        << "For this run the mode is " << modeValue
        << " which occurred " << largest << " times." << endl;
        
   Mode1 = modeValue;
   cout << endl;

} // end function mode
