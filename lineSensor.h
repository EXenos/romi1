#ifndef _LINESENSOR_H
#define _LINESENSOR_H

#define LINE_LEFT_PIN A4
#define LINE_CENTRE_PIN A3
#define LINE_RIGHT_PIN A2

class lineSensor_c {
  
  public:
  int values[3];
  
    int pin;

    // Constructor, accepts a pin number as
    // argument and sets this as input.
    lineSensor_c( int pin0, int pin1, int pin2) {

       // Record which pin we used.
       //pin = which_pin;

       // Set this pin to input.
       pinMode( pin0, INPUT );
       pinMode( pin1, INPUT );
       pinMode( pin2, INPUT );
    };

    //to get the results 
//    int p = readSensorValues();  //na vgalw to asteri mallon
//    (p[0])                       //periexomeno left
//    (p[1])                       //periexomeno centre 
//    (p[2])                       //periexomeno right

//    Serial.println(p[0]);  //print the values
//    Serial.print(p[1]);
//    Serial.print(p[2]);
    
    void readSensorValues(){
      
      //SENSOR READIND
      // To store result.
      
    
      // Read analog voltages
      values[0]= analogRead( LINE_LEFT_PIN ); //left
      values[1]= analogRead( LINE_CENTRE_PIN ); //centre
      values[2]= analogRead( LINE_RIGHT_PIN ); //right
    
      // To send data back to your computer.
      // You can open either Serial monitor or plotter.
      Serial.print( values[0] );
      Serial.print( ", " );
      Serial.print( values[1] );
      Serial.print( ", " );
      Serial.print( values[2] );
      Serial.print( "\n" );
    
      return;
      
    };


    // Write your calibration routine here
    // to remove bias offset
    void calibrate() {
      float value;

      // To help get you started, we use 
      // the pin set/recorded by the 
      // constructor to do an analogRead.
      value = analogRead( pin );

      pinMode( A2, INPUT); //ayta 8a mpoune stin calibrate
      pinMode( A3, INPUT);
      pinMode( A4, INPUT);
      
    }


    // Write a routine here to check if your
    // sensor is on a line (true or false).
    boolean onLine( float threshold ) {

       if (threshold >= 750) {
          return true;

          //if(onLine(threshold))
          //motor->moveLeftMotor(30);
          //motor->moveRightMotor(30);
      }
             
      return false;
    }

    // You can define other functions for
    // yourself. 
    // ...

};

#endif
