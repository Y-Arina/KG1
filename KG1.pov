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
    angle 80 //угол обзора камеры 80 градусов
    location <11,8,7> //расположение камеры
    look_at 0 //камера смотрит в точку 0 0 0
    right 16/9*x //тут можно указать соотношение сторон окна рендера
    up y
}/*
camera {
    angle 80 //угол обзора камеры 80 градусов
    location <-11,8,7> //расположение камеры
    look_at 0 //камера смотрит в точку 0 0 0
    right 16/9*x //тут можно указать соотношение сторон окна рендера
    up y
} */

light_source {
    <10,30,-3> //источник света
    color White*0.5//белого цвета
}
//свет в основной части на первом этаже 
light_source {
    <0,1,0> 
    color Aquamarine*3
}
//свет на втором этаже основной части 
light_source {
    <0,1.5,0>
    color SummerSky*3
}
//свет в первой башне 
light_source {
    <1.5,1.9,1.5>
    color Bronze*3
}
//свет во второй башне
light_source {
    <1.5,1.9,-1.5>
    color Very_Light_Purple*3
} 
//свет в третьей башне
light_source {
    <-1.5,1.9,-1.5>
    color Coral*3
} 
//свет в четвертой башне 
light_source {
    <-1.5,1.9,1.5>
    color NeonBlue*3
}




