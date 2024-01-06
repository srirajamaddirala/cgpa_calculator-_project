# include <bits/stdc++.h>
using namespace std;
double gradepoints(char grade){
    switch(grade){
        case 'A':
        case 'a':
              return 5.0;
        case 'B':
        case 'b':
              return 4.0;
        case 'C':
        case 'c':
              return 3.0;
        case 'D':
        case 'd':
              return 2.0;
        case 'E':
        case 'e':
              return 1.0;
        case 'F':
        case 'f':
              return 0.0;
        default :
             return -1.0 ;
    }
}
double calculatecgpa (int ncourses) {
    double totalcredits = 0.0 ;
    double totalgradepoints = 0.0 ;
    char grades[ncourses];

    for ( int i = 1;i <= ncourses ; ++i) {
        double credits ;
        char grade ;

        cout << "enter credits " << i << ":" ;
        cin >> credits ;

        cout << "enter grade " << i <<  "(A,B,C,D,E,F) :"  ;
        cin >> grade ;

        if (gradepoints(grade) == -1.0 ) {
            cout <<"invalid grade entered "<< endl ;
            exit(EXIT_FAILURE);
        }

        totalcredits += credits ;
        totalgradepoints += credits * gradepoints(grade) ;
        }
        
        double cgpa = totalgradepoints / totalcredits ;
        return cgpa ;
    }
    int main(){
        int ncourses ;
        cout << "enter number of courses " ;
        cin >> ncourses ;
        if(ncourses <= 0){
            cout << "invalid number of courses" << endl ;
            return 1 ;
        }
        double cgpa = calculatecgpa(ncourses);

        cout << fixed << setprecision(3);
        cout << "cgpa is :" << cgpa << endl ;
        return 0 ;

        }

    

