int val;

  
void setup()
{
  Serial.begin(9600);
  delay(7000);
}
  
void loop()
{
  if(Serial.available() >= 1)
  {
    val = Serial.read();
   
    if(val == 'a') // el auto se movera hacia adelante
    {
      motores(250,250);
    }
    else if(val == 'd') // el auto virara a la derecha
    {
      motores(-250, 250);
    }
    else if(val == 's') //el auto se detendra
    {
      motores(0,0);
    }
    else if(val == 'r') //el auto se movera hacia atras
    {
      motores(-250,-250);
    }
    else if(val == 'i') // el auto virara a la izquierda
    {
      motores(250,-250);
    }
  }
}
void motores(float m1, float m2)
{
   //m1 y m2 son las velocidades del primer
   // y segundo motor, entre -255 y 255
 
   //Declarar los pines para el motor 1
   pinMode(7, OUTPUT); //I1
   pinMode(8, OUTPUT); //I2
   pinMode(10, OUTPUT); //EA
    
   //Declarar los pines para el motor 2
   pinMode(2, OUTPUT);  //I3
   pinMode(4, OUTPUT);  //I4
   pinMode(6, OUTPUT); //EB
    
    
   //Invertir el giro del motor 1 si es necesario
   if(m1 < 0)
   {
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      m1 = -m1;
   }
   else
   {
      digitalWrite(8, LOW);
      digitalWrite(7,HIGH);
   }
    
   //Invertir el giro del motor 2 si es necesario
   if(m2 < 0)
   {
      digitalWrite(4, HIGH);
      digitalWrite(2, LOW);
      m2 = -m2;
   }
   else
   {
      digitalWrite(4, LOW);
      digitalWrite(2,HIGH);
   }
 
   //Generar pulso PWM
   analogWrite(10, m1);
   analogWrite(6, m2);
}
