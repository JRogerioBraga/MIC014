  int azul = 23;//Atribui o valor 9 a variável azul
  int verde = 33;//Atribui o valor 10 a variável verde
  int vermelho = 32;//Atribui o valor 12 a variável vermelho
  const int TRIGGER_PIN = 13; // Pino D4 conectado ao TRIG do HC-SR04
  const int ECHO_PIN = 12; // Pino D2 conectado ao ECHO do HC-
  float duration ;
  float distancia ;
  int contador = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(TRIGGER_PIN, OUTPUT); // Configura o pino TRIG como saída
  pinMode(ECHO_PIN, INPUT); // Configura o pino ECHO como entrada

}
 
void loop(){
  digitalWrite ( TRIGGER_PIN , LOW ) ;
  delayMicroseconds (2) ;
  digitalWrite ( TRIGGER_PIN , HIGH ) ;
  delayMicroseconds (10) ;
  digitalWrite ( TRIGGER_PIN , LOW ) ;

  duration = pulseIn ( ECHO_PIN , HIGH ) ;
  distancia = duration * 0.034 / 2;
  Serial.println(distancia);
  

if (distancia > 10){
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}
else {
  if (distancia <= 10 && distancia > 3){
    digitalWrite(verde, HIGH);//Coloca verde em nível alto
    digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto
  }
  else {
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
  }
  }
  delay(1000);


//digitalWrite(verde, HIGH);
//Serial.println("LED está aceso.");
//delay(1000);
 
//digitalWrite(verde, LOW);
//Serial.println("LED está apagado.");
//delay(1000);

//digitalWrite(vermelho, HIGH);
//Serial.println("LED está aceso.");
//delay(1000);
 
//digitalWrite(vermelho, LOW);
//Serial.println("LED está apagado.");
//delay(1000);

//Amarelo
  //digitalWrite(verde, HIGH);//Coloca verde em nível alto
  //digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto

  //delay(1000);//Intervalo de 1 segundo
  //digitalWrite(verde, LOW);//Coloca verde em nível baixo
  //digitalWrite(vermelho, LOW);//Coloca vermelho em nível baixo
  //delay(1000);//Intervalo de 1 segundo
 
}


