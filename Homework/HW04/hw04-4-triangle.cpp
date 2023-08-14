/*
    เขียนโปรแกรมเพื่อคำนวณหาพื้นที่สามเหลี่ยม เมื่อผู้ใช้กรอกค่าได้เพียง 2 ค่าคือ ส่วนสูง และ ฐาน เช่น ส่วนสูง 6 และฐานคือ 2 ดังนั้นพื้นที่สามเหลี่ยมคือ (6x2)/2 = 6
    
    Test case:
        Enter H & W :
            6 2
    Output:
        Triagle Area : 6.0

    Test case:
        Enter H & W :
            3 5
    Output:
        Triagle Area : 7.5
*/

#include <stdio.h>//The user must enter the height and base of the triangle as decimal numbers. 
//space between values Then the program will calculate the area of ​​the triangle and display the results on the screen. import data example

int main() {
    float height, base ;

    printf( "Enter H & W :\n") ;
    scanf( "%f %f", &height, &base) ;

    float area = (height * base) / 2.0 ;

    printf( "Triangle Area : %.1f\n", area) ; //Displays numbers and only one decimal place.

    return 0;
}//end fuction
