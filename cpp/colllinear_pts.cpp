
Program to check if three points are collinear

Given three points, check whether they lie on a straight (collinear) or not

Examples :

Input : (1, 1), (1, 4), (1, 5)
Output : Yes 
The points lie on a straight line

Input : (1, 5), (2, 5), (4, 6)
Output : No 
The points do not lie on a straight line



Recommended: Please try your approach on {IDE} first, before moving on to the solution.

First approach
Three points lie on the straight line if the area formed by the triangle of these three points is zero. So we will check if the area formed by the triangle is zero or not

Formula for area of triangle is : 
0.5 * [x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)]

The formula is basically half of determinant
value of following.
x1 x2 x3
y1 y2 y3
1   1  1

The above formula is derived from shoelace formula.

filter_none

edit

play_arrow

brightness_4
// C++ program to check if three 
// points are collinear or not  
// using area of triangle. 
#include <bits/stdc++.h> 
#include <math.h> 
#include <stdlib.h> 
  
using namespace std; 
// function to check if point  
// collinear or not 
void collinear(int x1, int y1, int x2,  
               int y2, int x3, int y3) 
{ 
    // Calculation the area of  
    // triangle. We have skipped  
    // multiplication with 0.5  
    // to avoid floating point  
    // computations  
    int a = x1 * (y2 - y3) +  
            x2 * (y3 - y1) +  
            x3 * (y1 - y2); 
  
    if (a == 0) 
        cout << "Yes"; 
    else
        cout << "No"; 
} 
  
// Driver Code 
int main() 
{ 
    int x1 = 1, x2 = 1, x3 = 1,  
        y1 = 1, y2 = 4, y3 = 5; 
    collinear(x1, y1, x2, y2, x3, y3); 
    return 0; 
} 
  
// This code is contributed 
// by Akanksha Rai(Abby_akku) 

Output :

Yes

 

Second approach

For three points, slope of any pair of points
must be same as other pair.

For example, slope of line joining (x2, y2)
and (x3, y3), and line joining (x1, y1) and
(x2, y2) must be same.

(y3 - y2)/(x3 - x2) = (y2 - y1)/(x2 - x1)

In other words, 
(y3 - y2)(x2 - x1) = (y2 - y1)(x3 - x2) 

If this equals zero then points lie on a straight line

filter_none

edit

play_arrow

brightness_4
// Slope based solution to check  
// if three points are collinear.  
#include <stdio.h> 
#include <math.h> 
  
/* function to check if  
point collinear or not*/
void collinear(int x1, int y1, int x2,  
               int y2, int x3, int y3) 
{ 
    if ((y3 - y2) * (x2 - x1) ==  
        (y2 - y1) * (x3 - x2)) 
        printf("Yes"); 
    else
        printf("No"); 
} 
  
// Driver Code 
int main() 
{ 
    int x1 = 1, x2 = 1, x3 = 0,  
        y1 = 1, y2 = 6, y3 = 9; 
    collinear(x1, y1, x2, y2, x3, y3); 
    return 0; 
} 

Output :

No 

