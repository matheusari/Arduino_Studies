void setup()
{
 pinMode(13, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(3, OUTPUT);
}

void loop()
{ 
 //Led Verde Veículos + Vermelho Pedestres
 digitalWrite(9, HIGH);
 digitalWrite(5, HIGH);
 delay(10000);
  
 digitalWrite(9, LOW);
 delay(500); 
 
 //Led Laranja Veículos + Vermelho Pedestres 
 digitalWrite(11, HIGH); 
 delay(3000);
  
 digitalWrite(11, LOW);
 digitalWrite(5, LOW); 
 delay(10);  
   
  
 //Led Vermelho Veículos + Verde pedestres + Vermelho Intermitente
 digitalWrite(13, HIGH);
 digitalWrite(3, HIGH);
 delay(8000);
 
 digitalWrite(5, HIGH); 
 digitalWrite(3, LOW);
 delay(500);
  
 digitalWrite(5, LOW); 
 delay(500); 
  
 digitalWrite(5, HIGH); 
 delay(500);
 
 digitalWrite(5, LOW); 
 delay(500); 
  
 digitalWrite(5, HIGH); 
 delay(500); 
  
 digitalWrite(5, LOW); 
 delay(500); 
  
 digitalWrite(5, HIGH); 
 delay(500);
  
 digitalWrite(13, LOW);
 digitalWrite(5, LOW); 
 delay(500); 
}