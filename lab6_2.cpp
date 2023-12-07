#include <iostream>
#include <cmath>
using namespace std;


double deg2rad(double deg){
    double rad ;
    rad = deg * M_PI / 180 ;
    return rad ;
}

double rad2deg(double rad){
    double deg ;
    deg = rad * 180 / M_PI ;
    return deg ;
}

double findXComponent(double l1,double l2,double deg1,double deg2){
    double x = ((l1 * cos(deg1)) +(l2 * cos(deg2)) ) ;
    return x ;
}

double findYComponent(double l1,double l2,double deg1,double deg2){
    double y = ((l1 * sin(deg1)) + (l2 * sin(deg2)) ) ;
    return y ;
} 

double pythagoras(double xcomp,double ycomp){
    double ans = sqrt(pow(xcomp, 2) + pow(ycomp, 2)) ;
    return ans ;
}

void showResult(double l,double deg){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << "Length of the resultant vector = " ;
    cout << l << endl << "Direction of the resultant vector (deg) = " << deg ;
    cout << endl << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}




int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}