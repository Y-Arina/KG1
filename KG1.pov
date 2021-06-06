#include "colors.inc" 
#include "Stairs.inc"
#include "house.inc"
#include "Towers.inc"
#include "Foundation.inc" 
#include "Garden.inc"

background{
    SkyBlue 
}
   
camera {
    angle 80 //���� ������ ������ 80 ��������
    location <11,8,7> //������������ ������
    look_at 0 //������ ������� � ����� 0 0 0
    right 16/9*x //��� ����� ������� ����������� ������ ���� �������
    up y
}/*
camera {
    angle 80 //���� ������ ������ 80 ��������
    location <-11,8,7> //������������ ������
    look_at 0 //������ ������� � ����� 0 0 0
    right 16/9*x //��� ����� ������� ����������� ������ ���� �������
    up y
} */

light_source {
    <10,30,-3> //�������� �����
    color White*0.5//������ �����
}
//���� � �������� ����� �� ������ ����� 
light_source {
    <0,1,0> 
    color Aquamarine*3
}
//���� �� ������ ����� �������� ����� 
light_source {
    <0,1.5,0>
    color SummerSky*3
}
//���� � ������ ����� 
light_source {
    <1.5,1.9,1.5>
    color Bronze*3
}
//���� �� ������ �����
light_source {
    <1.5,1.9,-1.5>
    color Very_Light_Purple*3
} 
//���� � ������� �����
light_source {
    <-1.5,1.9,-1.5>
    color Coral*3
} 
//���� � ��������� ����� 
light_source {
    <-1.5,1.9,1.5>
    color NeonBlue*3
}




