//
//  main.cpp
//  classConsept2
//
//  Created by Kaan Şengün on 13.11.2023.
//

#include <iostream>
#include "Triangle.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
    float a,b,c;
    cout<<"Please enter sides(a-b-c):"<<endl;
    cin>>a>>b>>c;
    Triangle triangle1(a,b,c);//constructor
    Triangle triangle4={a,b,c};//constructor
    Triangle triangle5(a,b,c);//constructor
    
    Triangle triangle2=triangle1;//copy constructor
    Triangle triangle3(triangle1);//copy constructor
    
    cout<<"-Triangle1-"<<endl;
    cout<<"SideA:"<<triangle1.getSideA()<<endl;
    cout<<"SideB:"<<triangle1.getSideB()<<endl;
    cout<<"SideC:"<<triangle1.getSideC()<<endl;
    cout<<"Area1:"<<triangle1.calculateArea()<<endl;
    triangle1.triangleType();
    
    cout<<"-Triangle2-"<<endl;
    triangle2.setValue(5,5,5);
    cout<<"SideA:"<<triangle2.getSideA()<<endl;
    cout<<"SideB:"<<triangle2.getSideB()<<endl;
    cout<<"SideC:"<<triangle2.getSideC()<<endl;
    cout<<"Area2:"<<triangle2.calculateArea()<<endl;
    triangle2.triangleType();
    
    
    
    
    
    
    return 0;
}
