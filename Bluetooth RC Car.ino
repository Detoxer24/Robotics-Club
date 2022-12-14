#include <SoftwareSerial.h>

int MR1 = 8;
int MR2 = 9;
int ML1 = 11;
int ML2 = 12;


SoftwareSerial Bluetooth(0,1);//0 1
char Data;


void sendData(String x){     
Bluetooth.println(x);}       

void setup()
{
    Bluetooth.begin(9600);
    pinMode(MR1,OUTPUT);
    pinMode(MR2,OUTPUT);
    pinMode(ML1,OUTPUT);
    pinMode(ML2,OUTPUT);
}

void loop()
{
    if(Bluetooth.available()){
        Data=Bluetooth.read();
        if(Data==('F'))
        {            
            digitalWrite(MR1,1);
            digitalWrite(MR2,0);
            digitalWrite(ML1,1);
            digitalWrite(ML2,0);
        }
        else if(Data==('L'))
        {            
            digitalWrite(MR1,1);
            digitalWrite(MR2,0);
            digitalWrite(ML1,0);
            digitalWrite(ML2,0);
        }
        
        else if(Data==('R'))
        {            
            digitalWrite(MR1,0);
            digitalWrite(MR2,0);
            digitalWrite(ML1,1);
            digitalWrite(ML2,0);
        }
        
        else if(Data==('B'))
        {            
            digitalWrite(MR1,0);
            digitalWrite(MR2,1);
            digitalWrite(ML1,0);
            digitalWrite(ML2,1);
        }
        else if(Data==('G')) //FL
        {            
            digitalWrite(MR1,1);
            digitalWrite(MR2,0);
            digitalWrite(ML1,0);
            digitalWrite(ML2,0);
        }
        else if(Data==('I')) //FR
        {            
            digitalWrite(MR1,0);
            digitalWrite(MR2,0);
            digitalWrite(ML1,1);
            digitalWrite(ML2,0);
        }
        else if(Data==('H')) //BL
        {            
            digitalWrite(MR1,0);
            digitalWrite(MR2,1);
            digitalWrite(ML1,0);
            digitalWrite(ML2,0);
        }
        else if(Data==('J')) //BR
        {            
            digitalWrite(MR1,0);
            digitalWrite(MR2,0);
            digitalWrite(ML1,0);
            digitalWrite(ML2,1);
        }

        else 
        {
          digitalWrite(MR1,0);
          digitalWrite(MR2,0);
          digitalWrite(ML1,0);
          digitalWrite(ML2,0);
        }
    }
}