//https://docs.arduino.cc/built-in-examples/communication/SerialEvent
//https://reference.arduino.cc/reference/en/language/functions/communication/serial/serialevent/
//https://elcodigoascii.com.ar/
//https://www.youtube.com/watch?v=vHeG3Gt6STE
//https://learn.microsoft.com/en-us/visualstudio/ide/reference/toolbox?view=vs-2022
//https://www.youtube.com/watch?v=lY1Z0Hgo288
//https://www.youtube.com/watch?v=gi-Sruf8FNA
#define tiempo_apagados 3000
#define times 200
int Pines[]=  { 2, 3, 4, 5, 6, 7, 8, 9};
int Pines2[]= {10,11,12,A1,A2,A3,A4,A5};
char dato;

void setup() {
  configurar_pines();
  Pone_todo_cero();
  Serial.begin(9600);
    while (!Serial) {
      ; // wait for serial port to connect. Needed for native USB
    }
  
  
}

void loop() {
//MUERTO
  //ciclico();
}
void Pone_todo_cero(){

    digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
}
void configurar_pines(){

    pinMode(2, OUTPUT);
 
}


void serialEvent() {
  if (Serial.available() > 0) {
          dato = Serial.read();
                        Serial.println(dato);  
                        switch (dato) {
                        


                              
                            case 'D':  
                              Serial.println("DERECHA");
                              digitalWrite(2, HIGH);//fuente
                        
                              break;  
                            case 'I':  
                              Serial.println("IZQUIERDA");

                              digitalWrite(2, LOW);//fuente2
                              break; 


                              
                            default:
                              
                              Serial.println(" no entiendo ");
                              break;
                          }

                  
                  
              
  }

  
}
