//башни 

//первая башня
difference {
    cylinder {
        <1.5,0.2,1.5> <1.5,1.2,1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <1.5,0.19,1.5> <1.5,1.21,1.5> 0.45 pigment {Tan}
    } 
    box {
        <1.5,0.19,1.5> <-1.5,1.21,-1.5> pigment {Tan} 
    } 
    cylinder {
        <2,0.5,1.5> <2,0.9,1.5> 0.1 pigment {White}
    } 
    cylinder {
        <1.5,0.5,2> <1.5,0.9,2> 0.1 pigment {White}
    }
} 

//разделение 1 и 2 этажей
difference {
    cylinder {
        <1.5,1.2,1.5> <1.5,1.3,1.5> 0.5 pigment {CornflowerBlue}
    }                                                  
    cylinder {
        <1.5,1.19,1.5> <1.5,1.31,1.5> 0.45 pigment {Tan}
    }
}   
//второй этаж
difference {
    cylinder {
        <1.5,1.3,1.5> <1.5,2,1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <1.5,1.29,1.5> <1.5,2.01,1.5> 0.45 pigment {Tan}
    }
    cylinder {
        <2,1.4,1.5> <2,1.8,1.5> 0.1 pigment {White}
    } 
    cylinder {
        <1.5,1.4,2> <1.5,1.8,2> 0.1 pigment {White}
    }
} 
//разделение 2 этажа и крыши
cylinder {
    <1.5,2,1.5> <1.5,2.1,1.5> 0.5 pigment {CornflowerBlue}
}  
//крыша
cone {
      <1.5,2.1,1.5> 0.5 <1.5,2.85,1.5> 0 pigment {Goldenrod }
}
    
//вторая башня     
difference {
    cylinder {
        <1.5,0.2,-1.5> <1.5,1.2,-1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <1.5,0.19,-1.5> <1.5,1.21,-1.5> 0.45 pigment {Tan}
    } 
    box {
        <1.5,0.19,1.5> <-1.5,1.21,-1.5> pigment {Tan} 
    }
    cylinder {
        <2,0.5,-1.5> <2,0.9,-1.5> 0.1 pigment {White}
    } 
    cylinder {
        <1.5,0.5,-2> <1.5,0.9,-2> 0.1 pigment {White}
    }
}  
//разделение 1 и 2 этажей
difference {
    cylinder {
        <1.5,1.2,-1.5> <1.5,1.3,-1.5> 0.5 pigment {CornflowerBlue}
    }                                                  
    cylinder {
        <1.5,1.19,-1.5> <1.5,1.31,-1.5> 0.45 pigment {Tan}
    }
}   
//второй этаж
difference {
    cylinder {
        <1.5,1.3,-1.5> <1.5,2,-1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <1.5,1.29,-1.5> <1.5,2.01,-1.5> 0.45 pigment {Tan}
    }
    cylinder {
        <2,1.4,-1.5> <2,1.8,-1.5> 0.1 pigment {White}
    } 
    cylinder {
        <1.5,1.4,-2> <1.5,1.8,-2> 0.1 pigment {White}
    }
} 
//разделение 2 этажа и крыши
cylinder {
    <1.5,2,-1.5> <1.5,2.1,-1.5> 0.5 pigment {CornflowerBlue}
}  
//крыша
cone {
      <1.5,2.1,-1.5> 0.5 <1.5,2.85,-1.5> 0 pigment {Goldenrod }
} 
    
//третья башня 
difference {
    cylinder {
        <-1.5,0.2,-1.5> <-1.5,1.2,-1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <-1.5,0.19,-1.5> <-1.5,1.21,-1.5> 0.45 pigment {Tan}
    } 
    box {
        <1.5,0.19,1.5> <-1.5,1.21,-1.5> pigment {Tan} 
    }
    cylinder {
        <-2,0.5,-1.5> <-2,0.9,-1.5> 0.1 pigment {White}
    } 
    cylinder {
        <-1.5,0.5,-2> <-1.5,0.9,-2> 0.1 pigment {White}
    }  
}  
//разделение 1 и 2 этажей
difference {
    cylinder {
        <-1.5,1.2,-1.5> <-1.5,1.3,-1.5> 0.5 pigment {CornflowerBlue}
    }                                                  
    cylinder {
        <-1.5,1.19,-1.5> <-1.5,1.31,-1.5> 0.45 pigment {Tan}
    }
}   
//второй этаж
difference {
    cylinder {
        <-1.5,1.3,-1.5> <-1.5,2,-1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <-1.5,1.29,-1.5> <-1.5,2.01,-1.5> 0.45 pigment {Tan}
    }
    cylinder {
        <-2,1.4,-1.5> <-2,1.8,-1.5> 0.1 pigment {White}
    } 
    cylinder {
        <-1.5,1.4,-2> <-1.5,1.8,-2> 0.1 pigment {White}
    }
} 
//разделение 2 этажа и крыши
cylinder {
    <-1.5,2,-1.5> <-1.5,2.1,-1.5> 0.5 pigment {CornflowerBlue}
}  
//крыша
cone {
      <-1.5,2.1,-1.5> 0.5 <-1.5,2.85,-1.5> 0 pigment {Goldenrod }
}
   
//четвертая башня
difference {
    cylinder {
        <-1.5,0.2,1.5> <-1.5,1.2,1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <-1.5,0.19,1.5> <-1.5,1.21,1.5> 0.45 pigment {Tan}
    } 
    box {
        <1.5,0.19,1.5> <-1.5,1.21,-1.5> pigment {Tan} 
    }
    cylinder {
        <-2,0.5,1.5> <-2,0.9,1.5> 0.1 pigment {White}
    } 
    cylinder {
        <-1.5,0.5,2> <-1.5,0.9,2> 0.1 pigment {White}
    }  
}  
//разделение 1 и 2 этажей
difference {
    cylinder {
        <-1.5,1.2,1.5> <-1.5,1.3,1.5> 0.5 pigment {CornflowerBlue}
    }                                                  
    cylinder {
        <-1.5,1.19,1.5> <-1.5,1.31,1.5> 0.45 pigment {Tan}
    }
}   
//второй этаж
difference {
    cylinder {
        <-1.5,1.3,1.5> <-1.5,2,1.5> 0.5 pigment {RichBlue}
    }
    cylinder {
        <-1.5,1.29,1.5> <-1.5,2.01,1.5> 0.45 pigment {Tan}
    } 
    cylinder {
        <-2,1.4,1.5> <-2,1.8,1.5> 0.1 pigment {White}
    } 
    cylinder {
        <-1.5,1.4,2> <-1.5,1.8,2> 0.1 pigment {White}
    }
} 
//разделение 2 этажа и крыши
cylinder {
    <-1.5,2,1.5> <-1.5,2.1,1.5> 0.5 pigment {CornflowerBlue}
}  
//крыша
cone {
      <-1.5,2.1,1.5> 0.5 <-1.5,2.85,1.5> 0 pigment {Goldenrod }
}