//фундамент

difference {
    box {
        <1.5,0,1.5> <-1.5,0.2,-1.5> pigment {LightWood} 
    }
    cylinder {
        <1.5,-0.01,1.5> <1.5,0.21,1.5> 0.5 pigment {LightWood}
    } 
    cylinder {
        <1.5,-0.01,-1.5> <1.5,0.21,-1.5> 0.5 pigment {LightWood}
    }
    cylinder {
        <-1.5,-0.01,-1.5> <-1.5,0.21,-1.5> 0.5 pigment {LightWood}
    }
    cylinder {
        <-1.5,-0.01,1.5> <-1.5,0.21,1.5> 0.5 pigment {LightWood}
    }
} 

box {
    <1.5,0,-0.5> <2,0.2,0.5> pigment {MediumWood}
}

cylinder {
    <1.5,0,1.5> <1.5,0.2,1.5> 0.5 pigment {MediumWood}
} 
cylinder {
    <1.5,0,-1.5> <1.5,0.2,-1.5> 0.5 pigment {MediumWood}
} 
cylinder {
    <-1.5,0,1.5> <-1.5,0.2,1.5> 0.5 pigment {MediumWood}
}
cylinder {
    <-1.5,0,-1.5> <-1.5,0.2,-1.5> 0.5 pigment {MediumWood}
}