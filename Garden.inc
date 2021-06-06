//сад  
//земля
cone {
    <0,-0.5,0> 4 <0,0,0> 4  pigment {VeryDarkBrown}
}
//вода  
difference {
    cone {
        <0,-0.5,0> 8 <0,0,0> 8 
        texture { pigment {rgb<0.1,0,0.9>} normal{agate 1 scale 1/2}}
    } 
    cone {
        <0,-0.51,0> 4 <0,0.1,0> 4  pigment {VeryDarkBrown}
    }
    cone {
        <8,-0.51,0> 1.5 <8,0.1,0> 1.5
    }
} 
//остров
intersection { 
    cone {
        <8,-0.5,0> 1.5 <8,0,0> 1.5 
    }
    
    cone {
        <0,-0.5,0> 8.01 <0,0.1,0> 8.01
    }
    pigment {VeryDarkBrown}    
}

//мостик
//основная часть  
box {
    <4,0.25,0.5> <6.5,0.2,-0.5> pigment {LightWood}
}
//опоры на основной части 
cylinder {
    <4.05,0.25,0.45> <4.05,0.45,0.45> 0.05 pigment {DarkWood}
}
cylinder {
    <6.45,0.25,0.45> <6.45,0.45,0.45> 0.05 pigment {DarkWood}
}                                                     
cylinder {
    <4.05,0.25,-0.45> <4.05,0.45,-0.45> 0.05 pigment {DarkWood}
}
cylinder {
    <6.45,0.25,-0.45> <6.45,0.45,-0.45> 0.05 pigment {DarkWood}
}
//поручни на основной части
cylinder {
    <4,0.425,0.45> <6.425,0.425,0.45> 0.025 pigment {MediumWood}
}
cylinder {
    <4,0.425,-0.45> <6.425,0.425,-0.45> 0.025 pigment {MediumWood}
}
//опоры на лестницах
cylinder {
    <3.65,0.05,0.45> <3.65,0.25,0.45> 0.05 pigment {DarkWood}
}
cylinder {
    <3.65,0.05,-0.45> <3.65,0.25,-0.45> 0.05 pigment {DarkWood}
}
cylinder {
    <6.85,0.05,0.45> <6.85,0.25,0.45> 0.05 pigment {DarkWood}
} 
cylinder {
    <6.85,0.05,-0.45> <6.85,0.25,-0.45> 0.05 pigment {DarkWood}
} 
//поручни на лестницах
cylinder {
    <4,0.425,0.45> <3.6,0.225,0.45> 0.025 pigment {MediumWood}
}  
cylinder {
    <4,0.425,-0.45> <3.6,0.225,-0.45> 0.025 pigment {MediumWood}
} 
cylinder{
    <6.425,0.425,0.45> <6.8,0.225,0.45> 0.025 pigment {MediumWood}
} 
cylinder{
    <6.425,0.425,-0.45> <6.8,0.225,-0.45> 0.025 pigment {MediumWood}
}
