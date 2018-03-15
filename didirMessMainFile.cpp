#include<iostream>
#include "didirMessHeaderFile.h"
using namespace std;
int main(){
	long totalAmount;
	long groundFloorMainB =groundFloorMain(1000,1200,600,300,1000,0,0,0);
	cout<<"Ground Floor Main B : "<<groundFloorMainB<<endl;
	long firstFloorMainB =firstFloorMain(200,500,500,800,0,500,500,0,500);
	long secondFloorMainB =secondFloorMain(1000,1000,500,800,1000,1000,1000,0,300);
	long groundFloorHomeB = groundFloorHome(700,500,500,600,500,0);
	long secondFloorHomeB = secondFloorHome(300,1000,1300,600,500,200,0);
	totalAmount = groundFloorMainB + firstFloorMainB + secondFloorMainB + groundFloorHomeB + secondFloorHomeB;
	cout<<"Total Amount : "<<totalAmount<<endl;
	return 0;
}
