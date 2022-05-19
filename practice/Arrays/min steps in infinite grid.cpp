// You are in an infinite 2D grid where you can move in any of the 8 directions

//  (x,y) to 
//     (x-1, y-1), 
//     (x-1, y)  , 
//     (x-1, y+1), 
//     (x  , y-1),
//     (x  , y+1), 
//     (x+1, y-1), 
//     (x+1, y)  , 
//     (x+1, y+1) 
// You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.

#include<stdio.h>
#include<math.h>
int coverPoints(int* X, int n1, int* Y, int n2) {
    int count=0,i,xd,yd;
    for(i=0;i<n1-1&&i<n2-1;i++)
    {
      xd=abs(X[i]-X[i+1]);
      yd=abs(Y[i]-Y[i+1]);
      if(xd>=yd)
      count=count+xd;
      else count=count+yd;
    }
    return count;
}