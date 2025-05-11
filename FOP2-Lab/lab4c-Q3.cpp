#include <iostream>
#include <cmath>
using namespace std;

/*Create a template function which computes the Euclidean distance between 2 points. Also instantiate two points (a) type <double> (b) type <int> and compute their distance. 
       (The Euclidean distance formula is used to find the distance between two points on 
        a plane. This formula says the distance between two points (x1 , y1 ) and (x2  , 
        y2  ) is d = √[(x2 – x1)^2 + (y2 – y1)^2].)

*/

template <typename T, typename S>
double euclideanDistance(T a1, T a2, S b1, S b2){
    double diffA=a2-a1, diffB=b2-b1, distance;
    distance=sqrt(pow(diffA, 2) + pow(diffB, 2));
    return distance;
}



int main(){

   double x1=2.5, x2=4.2, y1=3.2, y2=7.0; 
   int a1=1, a2=4, b1=2, b2=6; 
   cout << " Euclidean distance between a and b is " << euclideanDistance(a1, a2, b1, b2)<<endl;
   cout << " Euclidean distance between x and y is " << euclideanDistance(x1, x2, y1, y2);

}
