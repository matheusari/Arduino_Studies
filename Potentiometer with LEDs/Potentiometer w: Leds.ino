//potênciometros:
int potenciometro_um = A0;
int potenciometro_dois = A1;

//grupo 1 de LED's:
int laranja = 3;
int vermelho = 5;
int branco = 6;

//grupo 2 de LED's:
int verde = 9;
int amarelo = 10;
int azul = 11;

int valorPotenciometro_um;
int valorPotenciometro_dois;

void setup()
{
  pinMode (laranja, OUTPUT);
  pinMode (vermelho, OUTPUT);
  pinMode (branco, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (azul, OUTPUT);
  pinMode (potenciometro_um, INPUT);
  pinMode (potenciometro_dois, INPUT);
}
void loop()
{
  valorPotenciometro_um = analogRead(potenciometro_um);
  valorPotenciometro_dois = analogRead(potenciometro_dois);
  
  analogWrite(azul, byte(valorPotenciometro_um/4));
  analogWrite(amarelo, byte(valorPotenciometro_um/4));
  analogWrite(verde, byte(valorPotenciometro_um/4));
  
  analogWrite(branco, byte(valorPotenciometro_dois/4));
  analogWrite(vermelho, byte(valorPotenciometro_dois/4));
  analogWrite(laranja, byte(valorPotenciometro_dois/4));
}
